/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:30:38 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/19 13:16:33 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	len = ft_strlen(dest) + ft_strlen(src);
	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (size - 1 < INT_MAX && j < size - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (len);
}
/*
#include <string.h>
#include <stdio.h>
 int	main(void)
 {
 	char	dest[10] = "12345";
 	char	src[10] = "67890";
 	printf("\nFT FUNCTION: LEN: %d\n", ft_strlcat(dest, src, 0));
 	printf("%s\n\n", dest);
 }
 */