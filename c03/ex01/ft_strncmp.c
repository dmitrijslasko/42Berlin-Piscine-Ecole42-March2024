/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:34:53 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/15 11:06:08 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	0, if the s1 and s2 are equal;
//       a negative value if s1 is less than s2;
//       a positive value if s1 is greater than s2.

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

#include <stdio.h>
int	main(void)
{
	printf("\n%s vs. %s: %d\n", "abcsadasd", "abc", ft_strncmp("abcsadasd", "", 0));
	printf("%s vs. %s: %d\n", "abc", "abd", ft_strncmp("abc", "abd", 1));
	printf("%s vs. %s: %d\n", "abd", "abc", ft_strncmp("abd", "abc", 1));
	printf("%s vs. %s: %d\n\n", "1234", "12345", ft_strncmp("1234", "12345", 1));
}
