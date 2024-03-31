/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:34:26 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/13 10:38:58 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

int	ft_strlen(char *str)
{
	char *ptr = str;

	while (*ptr)
		ptr++;
	return (ptr - str);
}

#include <stdio.h>

int main(void)
{
    char *string = "Hello!";
    printf("THE NUMBER OF CHARS = %d\n", ft_strlen(string));
    return (0);
}
