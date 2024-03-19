/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:30:38 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/18 19:50:36 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (j < size - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (i + j - 1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[20] = "Hello ";
	char	src[20] = " !";
	
	printf("\nFT FUNCTION: LEN: %d\n\n", ft_strlcat(dest, src, 5));
}*/