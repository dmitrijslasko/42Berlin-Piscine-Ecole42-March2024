/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabhinav <aabhinav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 23:36:48 by aabhinav          #+#    #+#             */
/*   Updated: 2024/03/24 23:40:35 by aabhinav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

typedef struct Node
{
	char			*key;
	char			*value;
	struct Node		*next;	
}t_list;

int	*read_lines(char *buffer, t_list *dict, t_list **ptr);

// t_list	*create_dictionary(void)
// {
// 	t_list	*dict;
// 	dict = NULL;
// 	return (dict);
// }

t_list	*parse_file_make_dict(char *filename)
{
	int		dictionary_file;
	int		data;
	char	buffer[200000];
	t_list	*dict;
	t_list	**ptr;

	dict = NULL;
	ptr = &dict;
	dictionary_file = open(filename, O_RDONLY);
	data = read(dictionary_file, buffer, sizeof(buffer));
	buffer[sizeof(buffer) - 1] = 0;
	read_lines(buffer, dict, ptr);
	return (*ptr);
}
