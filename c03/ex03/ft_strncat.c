/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:58:06 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/15 12:56:56 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char		*dest_ptr;
	unsigned int	i;

	i = 0;
	dest_ptr = dest;
	while (*dest)
		dest++;

	while (i < nb && *src)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = 0;
	return (dest_ptr);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest[256] = "abcde";
	char	src[] = "";

	char	dest1[256] = "abcde";
	char	src1[] = "fghij";

	printf("\nFT FUNCTION: %s", ft_strncat(dest, src, 3));
	printf("\nLIB FUNCTION: %s\n\n", strncat(dest1, src1, 3));
}