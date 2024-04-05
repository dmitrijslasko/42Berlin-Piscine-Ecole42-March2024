/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:52:05 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/14 15:25:57 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_char_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_char_is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13) || (c >= 41 && c <= 57));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_upper(str[i]))
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		while (ft_char_is_space(str[i]))
			i++;
		if (ft_char_is_lower(str[i]))
			str[i] -= 32;
		while (ft_char_is_space(str[i]) == 0)
		 	i++;
		i++;
	}
	return (str);
}
/* 
#include <stdio.h>
int main(void)
{
   char str[] = "salut, COMMENT tu vas ? 42mots"
            " quarante-deux; cinquante+et+un";
   printf("\nString before: %s\n", str);
   printf("String after: %s\n", ft_strcapitalize(str));
   printf("String after: %s\n\n", str);

   return (0);
}
 */