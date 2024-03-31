/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:05:19 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/21 11:36:43 by dmlasko          ###   ########.fr       */
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
/*
#include <limits.h>
#include <stdio.h>
int	main(void)
{
	printf("23: %d\n", ft_is_prime(23));
	printf("24: %d\n", ft_is_prime(24));
	printf("INT_MAX: %d\n", ft_is_prime(INT_MAX));
	printf("-20: %d\n", ft_is_prime(-20));
}
*/