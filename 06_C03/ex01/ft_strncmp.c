/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:34:53 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/20 11:26:57 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}
/* 
 #include <stdio.h>
 #include <string.h>
 int	main(void)
 {
 	printf("\n%s vs. %s: %d\n", "abc", "cbc", ft_strncmp("abcde", "abczz", 3));
 	//printf("%s vs. %s: %d\n", "abc", "abd", ft_strncmp("abc", "abd", 3));
 	//printf("%s vs. %s: %d\n", "abd", "abc", ft_strncmp("abd", "abc", 3));
 	//printf("%s vs. %s: %d\n\n", "12345", "1234a", 
	//			ft_strncmp("1234", "1232a", 3));

 	printf("\n%s vs. %s: %d\n", "abc", "cbc", strncmp("abcde", "abczz", 3));
 	//printf("%s vs. %s: %d\n", "abc", "abd", strncmp("abc", "abd", 3));
 	//printf("%s vs. %s: %d\n", "abd", "abc", strncmp("abd", "abc", 3));
 	//printf("%s vs. %s: %d\n\n", "12345", "1234a", strncmp("1234", "1232a", 3));
 }
 */