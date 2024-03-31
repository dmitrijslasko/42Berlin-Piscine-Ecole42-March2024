/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:28:49 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/20 14:27:12 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str[20] = "Hello";
	printf("\nFT %s: %u", str, ft_strlen(str));
	printf("\nLIB %s: %u\n", str, strlen(str));
	char str1[20] = "2";
	printf("\nFT %s: %u", str, ft_strlen(str1));
	printf("\nLIB %s: %u\n", str, strlen(str1));
	char str2[20] = "       ";
	printf("\nFT %s: %u", str, ft_strlen(str2));
	printf("\nLIB %s: %u\n", str, strlen(str2));
	char str3[20] = "_ _ _ _ 4_";
	printf("\nFT %s: %u", str, ft_strlen(str3));
	printf("\nLIB %s: %u\n", str, strlen(str3));
	printf("\n");
	
}
*/