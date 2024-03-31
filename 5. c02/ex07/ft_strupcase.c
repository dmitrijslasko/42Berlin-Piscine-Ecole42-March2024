/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:35:17 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/13 16:36:39 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
//     char str[] = "once we were lowercase letters... "
//     		"1234567890!@#$^&*()... WE WERE ALWAYS UPPERCASE!";
//     printf("String before: %s\n", str);
//     printf("String after: %s\n", ft_strupcase(str));
//     printf("String after: %s\n", str);
//     return (0);
// }
