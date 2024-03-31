#include "ft_boolean.h"
#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
	write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	ft_putstr(EVEN_MSG);
	ft_putstr(ODD_MSG);
}