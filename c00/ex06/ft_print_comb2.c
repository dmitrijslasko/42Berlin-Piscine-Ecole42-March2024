/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:24:22 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/08 17:14:42 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int num1, int num2)
{
	int	digit1_1;
	int	digit1_2;
	int	digit2_1;
	int	digit2_2;

	digit1_1 = '0' + num1 / 10;
	digit1_2 = '0' + num1 % 10;
	digit2_1 = '0' + num2 / 10;
	digit2_2 = '0' + num2 % 10;
	ft_putchar(digit1_1);
	ft_putchar(digit1_2);
	ft_putchar(' ');
	ft_putchar(digit2_1);
	ft_putchar(digit2_2);
	if (digit1_1 != '9' || digit1_2 != '8')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 < 100)
	{
		num2 = 0;
		while (num2 < 100)
		{
			if (num1 < num2)
				ft_print_numbers(num1, num2);
			num2++;
		}
		num1++;
	}
}
