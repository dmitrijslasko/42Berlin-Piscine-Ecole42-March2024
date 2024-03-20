/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:44:46 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/20 12:05:30 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_to_int(char *str)
{
	int	number;

	number = 0;
	while (*str)
	{
		while (*str >= '0' && *str <= '9')
		{
			number = number * 10 + (*str - '0');
			str++;
		}
		if (*str < 0 || *str > 9)
			break ;
	}
	return (number);
}

int	ft_atoi(char *str)
{
	int	negative;
	int	number;

	negative = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative++;
		str++;
	}
	negative = negative % 2;
	number = str_to_int(str);
	if (negative)
		number = -number;
	return (number);
}
/* 
#include <stdio.h>
int	main(void)
{
	char num1[256] = "  	 ---+-+1 2 3 4ab567";
	printf("%d\n", ft_atoi(num1));
}
 */