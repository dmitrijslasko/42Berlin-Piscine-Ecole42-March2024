/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:06:55 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/12 18:00:14 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/* 
#include <stdio.h>
int main(void)
{
    char *str = "afasdasdasihiasdho!ia23shdiosah";
    printf("%s is alpha (letter only)? 0 if true, 1 "
    	"if false \nRESULT: %d\n", str, ft_str_is_alpha(str));
    return (0);
}
 */