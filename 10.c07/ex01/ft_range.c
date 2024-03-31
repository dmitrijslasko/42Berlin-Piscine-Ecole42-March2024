/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:28:55 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/21 17:29:24 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
		
	i = 0;
	while (max > min)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/* 
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;

	min = 0;
	max = 100;

	range = ft_range(min, max);

	i = 0;
	while (i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}
 */