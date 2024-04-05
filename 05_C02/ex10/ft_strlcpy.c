/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:42:40 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/14 15:26:02 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
//     char src[] = "1234567890";
//     char dest[256];
//     printf("\nSTRING 1 before the function call: %s\n", src);
//     printf("STRING 2 before the function call: %s\n", dest);
//     printf("----------------------------------------------------\n"); 
//     printf("LEN OF THE SOURCE STRING: %d\n", ft_strlcpy(dest, src, 5));
//     printf("STRING 1 after the function call: %s\n", src);
//     printf("STRING 2 after the function call: %s\n\n", dest);
// }