/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:58:06 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/15 12:33:47 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strstr(char *str, char *to_find)
{
	while (*str != *to_find)
		str++;

	if (*str == *to_find && *str)
		return (str);
	else
		return ((void *)0);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[256] = "bag of needles here";
	char	to_find[] = "needle";

	char	str1[256] = "bag of needles here";
	char	to_find1[] = "z";

	printf("\nFT FUNCTION: %s", ft_strstr(str, to_find));
	printf("\nLIB FUNCTION: %s\n\n", strstr(str1, to_find1));
}