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

#include <stdio.h>
#include <limits.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (size - 1 < INT_MAX && j < size - 1 && src[j])
	{
		printf("%d < %d ", j, size - 1);
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (ft_strlen(dest) + ft_strlen(src));
}
// int	main(void)
// {
// 	char	dest[20] = "12345";
// 	char	src[40] = "67890";
// 	printf("\nFT FUNCTION: LEN: %d\n\n", ft_strlcat(dest, src, 12));
// 	printf("%s", dest);
// }