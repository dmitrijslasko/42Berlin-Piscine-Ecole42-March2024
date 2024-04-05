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
	unsigned int	total_len;

	total_len = ft_strlen(dest) + ft_strlen(src);
	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (i < size - 1 && src[j])
		dest[i++] = src[j++];
	dest[i] = 0;
	return (total_len);
}
/* 
#include <string.h>
#include <stdio.h>

 int	main(void)
 {
 	char	dest[10] = "12345";
 	char	src[10] = "67890";
 	printf("\nFT FUNCTION: LEN: %d\n", ft_strlcat(dest, src, 6));
 	printf("%s\n\n", dest);

	char	dest1[10] = "12345";
 	char	src1[10] = "67890";
 	printf("\nFT FUNCTION: LEN: %d\n", strlcat(dest1, src1, 6));
 	printf("%s\n\n", dest1);
 }
 */