/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:45:05 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/13 16:37:47 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
// #include <stdio.h>
// int main(void)
// {
//     char str[] = "ONCE WE WERE UPPERCASE LETTERS... "
//     			"1234567890!@#$^&*()... we were always lowercase!";
//     printf("\nString before: %s\n", str);
//     printf("String after: %s\n", ft_strlowcase(str));
//     printf("String after: %s\n\n", str);
//     return (0);
// }
