/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:44:46 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/22 12:44:06 by dmlasko          ###   ########.fr       */
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

int	find_index(char *base, char c)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	str_to_int(char *str, char *base)
{
	int	number;
	int	base_len;

	number = 0;
	base_len = ft_strlen(base);
	while (*str)
	{
		while (*str >= base[0] && *str <= base[base_len - 1])
		{
			number = number * base_len + find_index(base, *str);
			str++;
		}
		if (*str < base[0] || *str > base[base_len - 1])
			break ;
	}
	return (number);
}

/*
Moulinette check #1:
No check for whitespace in the base
*/
int	check_base(char *base)
{
	int	base_len;
	int	i;
	int	j;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' 
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	number;
	int	negative;

	number = 0;
	if (check_base(base) == 0)
		return (0);
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
	number = str_to_int(str, base);
	if (negative)
		number = -number;
	return (number);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi_base("4c7", "0123456789abcdef"));
}
*/