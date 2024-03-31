/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:01:57 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/14 15:28:18 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(char c)
{
	char	*chars;

	chars = "0123456789abcdef\\";
	write(1, &chars[16], 1);
	write(1, &chars[c / 16], 1);
	write(1, &chars[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
			print_hex(*str);
		str++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
//	char str1[] = "Coucout\t\tu vas bien ?";
//	printf("\n%s\n", str1);
//	printf("------------------------------------------------\n");
//	ft_putstr_non_printable(str1);
// } 