#include <stdio.h>

int	ft_strlen(char *str);
int	ft_recursive_power(int nb, int power);
int	ft_atoi(char *str);

void	break_number(char *str)
{
	int	number;
	int	int_order;
	int	i;

	number = 0;
	i = 0;
	while (str[i])
	{
		int_order = ft_strlen(str) - i - 1;
		printf("\n%c", str[i]);
		while (int_order-- > 0)
			printf("%c", '0');
		i++;
	}
}