/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:40:27 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/20 13:53:05 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	check_base(char *base)
{
	int	base_len;
	int	i;
	int	j;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		index;
	char	buffer[256];

	if (check_base(base) == 0)
		return ;
	base_len = ft_strlen(base);
	index = sizeof(buffer) - 1;
	if (nbr < 0)
		write(1, "-", 1);
	else
		nbr = -nbr;
	while (-(nbr / base_len) > 0)
	{
		buffer[index] = *(base - nbr % base_len);
		nbr /= base_len;
		index--;
	}
	buffer[index] = *(base - nbr % base_len);
	write(1, &buffer[index], sizeof(buffer) / sizeof(buffer[0]) - index);
}
/* 
#include <limits.h>
int	main(void)
{
	ft_putnbr_base(1223, "0123456789abcdef");
}
 */