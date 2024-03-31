/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:47:51 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/24 23:20:14 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

typedef struct Node
{
	char			*key;
	char			*value;
	struct Node		*next;	
}t_list;

char	*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*add_zeros(char *array);
void	break_multiplier(char str[3]);
t_list	*split_string_add_record(char *str, t_list *dict, t_list **ptr);
t_list	*remove_all(t_list *p_head);
char	*return_value(t_list *p_head, char *p_key);
void	process_array(char *array, t_list *dictionary);
int		dict_main(char *dict_name);
t_list	*parse_file_make_dict(char *dict_name);

int	main(int argc, char *argv[])
{
	int		dictionary_file;
	t_list	*dictionary;
	char	*array;
	char	*filename;

	if (argc == 2)
	{
		array = argv[1];
		filename = "numbers.dict";
	}
	else if (argc == 3)
	{
		filename = argv[1];
		array = argv[2];
	}
	if (array[0] == '-' || (argc != 2 && argc !=3))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	dictionary = parse_file_make_dict(filename);
	process_array(add_zeros(array), dictionary);
	free(dictionary);
	return (0);
}
