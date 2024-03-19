/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:52:05 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/12 16:23:46 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
            return (1);
        str++;
    }
    return (0);
}

char *ft_strcapitalize(char *str) 
{
    int i;

	i = 0;
    while (str[i]) {
        if (ft_str_is_alpha(&str[i])) {
            if (str[i] >= 'a' && str[i] <= 'z' && (i == 0 || !ft_str_is_alpha(&str[i - 1])))
                str[i] -= 32;
            else if (str[i] >= 'A' && str[i] <= 'Z' && i != 0 && ft_str_is_alpha(&str[i - 1]))
                str[i] += 32;
        }
        i++;
    }
    return (str);
}

// 

#include <stdio.h>
int main(void)
{
    char str[] = "sAlut, comment tu vas ? 42mots"
             "quarante-deux; cinquante+et+un";
    printf("\nString before: %s\n", str);
    printf("String after: %s\n", ft_strcapitalize(str));
    printf("String after: %s\n\n", str);
    return (0);
}
