/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabhinav <aabhinav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 23:22:20 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/24 23:35:36 by aabhinav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

typedef struct Node
{
	char			*key;
	char			*value;
	struct Node		*next;	
}t_list;

char	*return_value(t_list *p_head, char *p_key);
int		ft_strlen(char *str);
char	*return_value(t_list *p_head, char *p_key);
int		ft_strlen(char *str);
int		ft_recursive_power(int nb, int power);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	make_str(char c, char str[2]);
void	make_str_tenths(char c1, char c2, char str[3]);

void	describe_multiplier(char multiplier[3], char str[2], 
		t_list *dictionary, char tenths[3])
{
	if (multiplier[0] != '0')
	{
		ft_putstr(return_value(dictionary, str));
		ft_putstr("hundred");
	}
	if (multiplier[1] == '1' && (multiplier[2] 
			>= '0' && multiplier[2] <= '9'))
	{
		make_str_tenths(multiplier[1], multiplier[2], tenths);
		if (return_value(dictionary, tenths) != NULL)
			ft_putstr(return_value(dictionary, tenths));
	}
	else if ((multiplier[1] >= '0' && multiplier[1] <= '9'))
	{
		make_str_tenths(multiplier[1], '0', tenths);
		if (return_value(dictionary, tenths) != NULL)
			ft_putstr(return_value(dictionary, tenths));
		if (return_value(dictionary, str) != NULL)
		{
			make_str(multiplier[2], str);
			if (multiplier [2] != '0')
				ft_putstr(return_value(dictionary, str));
		}
	}
}

void	fill_multiplier(char *multiplier, char *array, t_list *dictionary)
{
	int		i;
	char	str[2];
	char	tenths[3];
	int		j;

	i = 0;
	while (i < 3)
	{
		multiplier[i] = array[i];
		i++;
	}
	make_str(multiplier[0], str);
	describe_multiplier(multiplier, str, dictionary, tenths);
}

int	make_tail(char *tail, int array_len)
{
	int	i;

	i = 0;
	tail[i] = '1';
	i++;
	while (i < array_len - 2)
	{
		tail[i] = '0';
		i++;
	}
	tail[i] = 0;
	return (i);
}

char	*process_array(char *array, t_list *dictionary)
{
	char	multiplier[3];
	char	*tail;
	int		array_len;
	char	*output;
	int		i;

	while (ft_strlen(array) > 0)
	{
		array_len = ft_strlen(array);
		fill_multiplier(multiplier, array, dictionary);
		tail = (char *)malloc(sizeof(char) * (array_len - 3 + 1));
		if (tail == NULL)
			return (NULL);
		i = make_tail(tail, array_len);
		if (i != 1)
		{
			output = return_value(dictionary, tail);
			ft_putstr(output);
		}
		array += 3;
	}
	return (array);
}
