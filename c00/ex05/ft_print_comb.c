/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:09:34 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/08 17:15:12 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_out_numbers(int num1, int num2, int num3)
{
	ft_putchar(num1);
	ft_putchar(num2);
	ft_putchar(num3);
	if (num1 != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				if (num2 != num1 && num3 != num1)
				{
					ft_print_out_numbers(num1, num2, num3);
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
