/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabhinav <aabhinav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 22:55:52 by aabhinav          #+#    #+#             */
/*   Updated: 2024/03/24 23:41:10 by aabhinav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

typedef struct Node
{
	char			*key;
	char			*value;
	struct Node		*next;	
} t_list;

int	ft_strlen(char *str);
t_list	*split_string_add_record(char *str, t_list *dict, t_list **ptr);
// t_list	*remove_all(t_list *p_head);
// char	*return_value(t_list *p_head, char *p_key);

void	throw_error(void)
{
	write(2, "ERROR!", 6);
}

int	ft_char_is_printable(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	process_line(char *line, int line_len, t_list *dict, t_list **ptr)
{
	int	i;
	int	j;
	int	remove_space_flag;
	char	*processed_line;
	
	i = 0;
	j = 0;
	remove_space_flag = 1;
	processed_line = (char *)malloc(sizeof(char) * line_len);
	while (line[i] != 0)
	{
		while (line[i] == ' ' && remove_space_flag == 1)
			i++;
		if (ft_char_is_printable(line[i]))
			remove_space_flag = 0;
		processed_line[j++] = line[i++];
	}
	line[j] = 0;
	dict = split_string_add_record(processed_line, *ptr, ptr);
	*ptr = dict;
	return (1);
}

void	read_lines(char *buffer, t_list *dict, t_list **ptr)
{
	char	*ptr_to_buffer;
	char	*parsed_line;
	int	i;
	int	position_of_new_line;

	ptr_to_buffer = buffer;
	while (ft_strlen(ptr_to_buffer) > 0)
	{
		position_of_new_line = 0;
		while (ptr_to_buffer[position_of_new_line] != '\n')
			position_of_new_line++;
		parsed_line = (char *)malloc(sizeof(char) * (position_of_new_line + 1));
		i = 0;
		while (i < position_of_new_line)
		{
			parsed_line[i] = ptr_to_buffer[i];
			i++;
		}
		if (process_line(parsed_line, position_of_new_line, dict, ptr) == 0)
			throw_error();
		ptr_to_buffer += position_of_new_line + 1;
	}
}
