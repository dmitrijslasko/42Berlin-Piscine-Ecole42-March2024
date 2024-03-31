/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:51:07 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/25 16:54:33 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str);
int	find_index(char *base, char c);
int	str_to_int(char *str, char *base);
int	check_base(char *base);
int	ft_atoi_base(char *str, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	int		base_len;
	int		index;
	char	*buffer;

	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	buffer = (char *)malloc(sizeof(char) * 256);
	if (buffer == NULL)
		return (NULL);
	base_len = ft_strlen(base_to);
	index = sizeof(buffer) - 1;
	if (num < 0)
		write(1, "-", 1);
	else
		num = -num;
	while (-(num / base_len) > 0)
	{
		buffer[index] = *(base_to - num % base_len);
		num /= base_len;
		index--;
	}
	buffer[index] = *(base_to - num % base_len);
	return (&buffer[index]);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi_base("4c715df1", "0123456789abcdef"));
	//printf("%s\n", ft_convert_base("1282498033","0123456789", "012345678 9abcdef"));
	puts(ft_convert_base("1282498033","0123456789", "012345678 9abcdef"));
}
*/