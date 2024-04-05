#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_separator(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

int	check_and_print_number(char *buffer, int i)
{
	int	j;
	int	k;
	int	first;

	j = i;
	while (j < 8)
	{
		k = j + 1;
		while (k < 9)
		{
			if (buffer[j] >= buffer[k++])
				return (-1);
		}
		j++;
	}
	first = i;
	while (i < 9)
		ft_putchar(buffer[i++]);
	if (buffer[first] != '0' + first + 1)
		print_separator();
	return (0);
}

void	generate_number(int num, int n)
{
	char	buffer[9];
	int		i;

	i = 8;
	while (num > 0)
	{
		buffer[i] = '0' + num % 10;
		num /= 10;
		if (num > 0)
			i--;
	}
	while (i > (9 - n))
		buffer[--i] = '0';
	check_and_print_number(buffer, i);
}

void	ft_print_combn(int n)
{
	int	limit;
	int	i;

	limit = 1;
	i = n;
	while (i-- > 0)
		limit *= 10;
	i = 1;
	while (i < limit)
		generate_number(i++, n);
}
/* 
General approach description: brute force;
generate all posible numbers from 0...1 up to the possible limit 
(10 to the power of [number count]);
Then see if the digits in the number are unique – if yes, 
print out the number. If no, skip & go to the next.
Passes Norminette & Mini Moulinette.

#include <stdio.h>
int	main(void)
{
	ft_print_combn(7);
	return (0);
}
 */