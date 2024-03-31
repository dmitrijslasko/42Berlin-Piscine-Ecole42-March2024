/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:18:06 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/19 13:09:48 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest[20] = "Hello ";
	char	src[20] = "w!";
	
	char	dest1[20] = "Hello ";
	char	src1[20] = "w!";

	printf("\nFT FUNCTION: %s", ft_strncat(dest, src, 0));
	printf("\nLIB FUNCTION: %s\n\n", strncat(dest1, src1, 0));
}
*/