/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:11:06 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/21 11:38:23 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divisor_count;
	int	divisor;

	divisor_count = 0;
	divisor = 1;
	while (divisor < nb)
	{
		if (nb % divisor == 0)
			divisor_count++;
		divisor++;
	}
	if (divisor_count == 1)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) != 1) 
		nb++;
	return (nb);
}
/*
#include <stdio.h>
#include <limits.h>
int	main(void)
{
	printf("23: %d\n", ft_find_next_prime(-20));
	printf("24: %d\n", ft_find_next_prime(24));
	printf("1: %d\n", ft_find_next_prime(1));
	printf("71: %d\n", ft_find_next_prime(INT_MAX));
}
*/