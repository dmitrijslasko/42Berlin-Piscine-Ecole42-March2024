/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:33:42 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/13 16:26:41 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}
//#include <stdio.h>
//int	main(void)
//{
//	char *str = "asdasdasdasdasdafa";
//	printf("%s is lowercase letters only? "
//	"1 if true, 0 if false \nRESULT: %d\n", str, ft_str_is_lowercase(str));
//	return (0);
//}