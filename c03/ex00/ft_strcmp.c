/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:34:53 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/15 10:59:34 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	0, if the s1 and s2 are equal;
//       a negative value if s1 is less than s2;
//       a positive value if s1 is greater than s2.

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("\n%s vs. %s: %d\n", "abc", "abc", ft_strcmp("abc", "abc"));
// 	printf("%s vs. %s: %d\n", "abc", "abd", ft_strcmp("abc", "abd"));
// 	printf("%s vs. %s: %d\n", "abd", "abc", ft_strcmp("abd", "abc"));
// 	printf("%s vs. %s: %d\n\n", "1234", "12345", ft_strcmp("1234", "12345"));
// }