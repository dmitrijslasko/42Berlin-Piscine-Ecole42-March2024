/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:58:06 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/18 19:54:36 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (dest_ptr);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest[256] = "abcde";
	char	src[] = "fghij";

	char	dest1[256] = "abcde";
	char	src1[] = "fghij";

	printf("\nFT FUNCTION: %s", ft_strcat(dest, src));
	printf("\nLIB FUNCTION: %s\n\n", strcat(dest1, src1));
}
*/