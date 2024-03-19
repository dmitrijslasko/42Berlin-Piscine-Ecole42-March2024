/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:34:53 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/18 19:54:34 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("\n%s vs. %s: %d\n", "abc", "cbc", ft_strncmp("abc", "", 100));
	printf("%s vs. %s: %d\n", "abc", "abd", ft_strncmp("abc", "abd", 3));
	printf("%s vs. %s: %d\n", "abd", "abc", ft_strncmp("abd", "abc", 3));
	printf("%s vs. %s: %d\n\n", "1234", "12345", ft_strncmp("1234", "12345", 5));

	printf("\n%s vs. %s: %d\n", "abc", "cbc", strncmp("abc", "", 4));
	printf("%s vs. %s: %d\n", "abc", "abd", strncmp("abc", "abd", 3));
	printf("%s vs. %s: %d\n", "abd", "abc", strncmp("abd", "abc", 3));
	printf("%s vs. %s: %d\n\n", "1234", "12345", strncmp("1234", "12345", 5));
}
*/