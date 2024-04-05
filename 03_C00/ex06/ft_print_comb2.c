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
	ft_putchar('0' + num1 / 10);
	ft_putchar('0' + num1 % 10);
	ft_putchar(' ');
	ft_putchar('0' + num2 / 10);
	ft_putchar('0' + num2 % 10);
	if (num1 / 10 != 9 || num1 % 10 != 8)
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
/* 
int	main(void)
{
	ft_print_comb2();
}
 */