/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:10:34 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/21 11:37:06 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	result = 1;
	while (power-- > 0)
		result *= nb;
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 1));
}
*/