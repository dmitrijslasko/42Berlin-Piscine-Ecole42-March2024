/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:48:20 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/12 17:59:49 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

// #include <stdio.h>

// int main(void)
// {
//     char str1[] = "I will be replaced till this place (n). But I have more chars in me!";
//     char str2[256];

//     printf("\nSTRING 1 before the function call: %s\n", str1);
//     printf("STRING 2 before the function call: %s\n", str2);
//     printf("----------------------------------------------------------------------\n");
    
//     ft_strncpy(str2, str1, 39);

//     printf("STRING 1 after the function call: %s\n", str1);
//     printf("STRING 2 after the function call: %s\n", str2);
// }