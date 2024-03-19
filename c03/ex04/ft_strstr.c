/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:58:06 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/18 19:51:02 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (*str)
	{
		j = 0;
		while (str[j] == to_find[j])
		{
			if (to_find[j + 1] == 0)
				return (&str[i]);
			j++;
		}
		str++;
	}
	return ((void *)0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*test[10][5] = {	{"Hello world", "lo"},
					{"1234567890", " 5 "},
					{"", " "},
					{"  ", ""},
					{"testtest", "test"},
					{" ___ ", " "},
					{"lo", "Hello world"},
					{"lohotron", "ho"},
					{"ahahaha", "ha"},
					{"1234567890", "\0"}
					};
	int	i = 0;
	int	result = 0;
	int	passed_tests = 0;

	while (i < 10)
	{
		printf("----------------------------------------------------------"
		"\nFT FUNCTION: %s", 
		ft_strstr(test[i][0], test[i][1])
		);
		
		printf("\nLIB FUNCTION: %s\n", 
		strstr(test[i][0], test[i][1])
		);
		printf("\033[0;31m");

		if (
			ft_strstr(test[i][0], test[i][1]) 
			== 
			strstr(test[i][0], test[i][1])
			)
		{
			result = 1;
			printf("\033[0;32m");
			passed_tests++;
		}
		else
			printf("\033[0;31m");
		printf("%s\n", result == 1? "▲ true":"▲ false");
		printf("\033[0m");
		i++;
	}
	printf("\033[0;33m");
	printf("PASSED TESTS: %d/%d\n", passed_tests, i);
	printf("\033[0m");
}*/