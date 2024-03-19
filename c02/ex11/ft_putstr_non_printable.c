/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:01:57 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/12 18:44:50 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr_non_printable(char *str)
{
    int i;
    int character;

    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] > 31 && str[i] < 127) // if the char is printable
            write(1, &str[i], 1);
        else
        {
            character = str[i];
            write(1, "\\", 1);
            write(1, &c, 1);
        }
        i++;
    }
}

int main(void)
{
    char str1[] = "Coucout\nu vas bien ?";

    printf("\n%s\n", str1);
    printf("----------------------------------------------------------------------\n");
    
    ft_putstr_non_printable(str1);
} 