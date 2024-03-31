/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:28:04 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/13 16:48:47 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int main(void)
// {
//     char *str = "asdasdasdasdasdafa";
//     printf("%s is UPPERCASE letters only? 1 if true,"
//      "0 if false \nRESULT: %d\n", str, ft_str_is_uppercase(str));
//     return (0);
// }
