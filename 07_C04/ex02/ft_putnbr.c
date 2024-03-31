/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:40:27 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/20 14:27:23 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-0);
	write(1, "\n", 1);
}
 */