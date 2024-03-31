/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:56:32 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/14 15:32:18 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*pointer_to_dest;

	pointer_to_dest = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (pointer_to_dest);
}

// #include <stdio.h>
// int main(void)
// {
//     char str1[] = "Yaay! I will get copied into another string!";
//     char str2[256];

//     printf("\nSTRING 1 before the function call: %s\n", str1);
//     printf("STRING 2 before the function call: %s\n", str2);
//     printf("------------------------------------------------\n");

//     printf("STRING 2 after the function call:"
//              " %s\n\n", ft_strcpy(str2, str1));
//     printf("STRING 1 after the function call: %s\n", str1);
// }
