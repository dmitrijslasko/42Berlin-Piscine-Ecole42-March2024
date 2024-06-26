/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:23:12 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/08 19:26:20 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	buffer[10];
	int		index;

	index = sizeof(buffer) - 1;
	if (nb < 0)
		write(1, "-", 1);
	else
		nb = -nb;
	while (-(nb / 10) > 0)
	{
		buffer[index] = '0' - nb % 10;
		nb /= 10;
		index--;
	}
	buffer[index] = '0' - nb % 10;
	write(1, &buffer[index], sizeof(buffer) / sizeof(buffer[0]) - index);
}
/* 
#include <stdio.h>
#include <limits.h>

int main(void)
{
    ft_putnbr(INT_MAX);
    write(1, "\n", 1);
    ft_putnbr(INT_MIN);
    write(1, "\n", 1);
	ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(-0);
    write(1, "\n", 1);
}
 */