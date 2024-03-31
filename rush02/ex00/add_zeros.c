/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_zeros.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabhinav <aabhinav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 23:19:31 by aabhinav          #+#    #+#             */
/*   Updated: 2024/03/24 23:35:51 by aabhinav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	ft_strlen(char *str);

char	*add_zeros(char *array)
{
	int		array_len;
	int		zeros_count;
	char	*p_array;
	int		i;

	array_len = ft_strlen(array);
	if (array_len % 3 == 0)
		zeros_count = 0;
	else
		zeros_count = 3 - array_len % 3;
	p_array = (char *)malloc(sizeof(char) * (array_len + zeros_count + 1));
	if (p_array == NULL)
		return (NULL);
	i = 0;
	while (i < array_len + zeros_count)
	{
		while (i < zeros_count)
			p_array[i++] = '0';
		p_array[i] = array[i - zeros_count];
		i++;
	}
	p_array[i] = 0;
	return (p_array);
}
