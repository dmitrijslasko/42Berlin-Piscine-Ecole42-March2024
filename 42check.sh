#!/bin/bash

echo -e "\n"
echo "░░██╗██╗██████╗░░█████╗░██╗░░██╗███████╗░█████╗░██╗░░██╗"
echo "░██╔╝██║╚════██╗██╔══██╗██║░░██║██╔════╝██╔══██╗██║░██╔╝"
echo "██╔╝░██║░░███╔═╝██║░░╚═╝███████║█████╗░░██║░░╚═╝█████═╝░"
echo "███████║██╔══╝░░██║░░██╗██╔══██║██╔══╝░░██║░░██╗██╔═██╗░"
echo "╚════██║███████╗╚█████╔╝██║░░██║███████╗╚█████╔╝██║░╚██╗"
echo "░░░░░╚═╝╚══════╝░╚════╝░╚═╝░░╚═╝╚══════╝░╚════╝░╚═╝░░╚═╝"
echo "Version 0.1"

git_root=$(git rev-parse --show-toplevel)

pushd "$git_root"
echo -e "\n"
# NORMINETTE CHECK
echo "==================================	(1) NORM"
norminette 
norminette_status=$?

# COMPILATION CHECK
echo "==================================	(2) CC"
cc -Wall -Wextra -Werror -c */*.c
cc_status=$?

mkdir _cc-files && mv *.o $_ 
rm -rf _cc-files

# CHECK FILES IN THE GIT REPO
echo "==================================	(3) Files in repo"
git ls-files
echo $?

# CHECK UNCOMMITED GIT
echo "==================================	(4) Git uncommited"
git status --short --untracked-files=no
uncommited_status=$(git status --short --untracked-files=no | wc -l)

# COLOR CODES
RED='\033[0;91m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

if [ "$norminette_status" -ne 0 -o "$cc_status" -ne 0 -o "$uncommited_status" -ne 0 ];
then
	echo -e "$RED## SOME STEPS CAN BE IMPROVED."
	echo -e "Do you mind to take a deeper look there?$NC"
else
	echo -e "$GREEN## I THINK ALL GOOD HERE AT $git_root."
	echo -e "Good luck with evaluations!"
	echo -e "\n"
fi
popd