/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:28:59 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/14 14:33:44 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
// #include <stdio.h>
// int main(void)
// {
//     char *str = "ohsadoihasiodhasiohdoisahois";
//     printf("%s is printable characters only? 1 if true,"
//             "0 if false \nRESULT: %d\n", str, ft_str_is_printable(str));
//     return (0);
// }
