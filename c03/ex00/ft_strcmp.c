/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:34:53 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/18 19:52:10 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	// if (*s1 - *s2 > 0)
	// 	return (1);
	// else if (*s1 - *s2 < 0)
	// 	return (-1);
	// return (0);
	return (*s1 - *s2);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	printf("\n%s vs. %s: %d\n", "abc", "abc", ft_strcmp("abc", "abc"));
	printf("%s vs. %s: %d\n", "abc", "abd", ft_strcmp("abc", "abd"));
	printf("%s vs. %s: %d\n", "abd", "abc", ft_strcmp("abd", "abc"));
	printf("%s vs. %s: %d\n\n", "1234", "12345", ft_strcmp("1234", "12345"));

	printf("\n%s vs. %s: %d\n", "abc", "abc", strcmp("abc", "abc"));
	printf("%s vs. %s: %d\n", "abc", "abd", strcmp("abc", "abd"));
	printf("%s vs. %s: %d\n", "abd", "abc", strcmp("abd", "abc"));
	printf("%s vs. %s: %d\n\n", "1234", "12345", strcmp("1234", "12345"));
}*/
