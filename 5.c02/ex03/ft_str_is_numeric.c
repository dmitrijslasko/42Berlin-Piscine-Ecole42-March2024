/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:33:42 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/13 16:25:44 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
//#include <stdio.h>
//int main(void)
//{
//    char *str = "sadasd";
//    printf("%s is numeric (digits only)? 1 if"
//   		 " true, 0 if false \nRESULT: %d\n", str, ft_str_is_numeric(str));
//    return (0);
//}