/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:06:55 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/14 15:28:49 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z')
			&& (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int main(void)
// {
//     char *str = "asdasdhousaSGAUIGDUOGUD";
//     printf("%s is alpha (letter only)? 1 if true, 0 if false"
//     		" \nRESULT: %d\n", str, ft_str_is_alpha(str));
//     return (0);
// }