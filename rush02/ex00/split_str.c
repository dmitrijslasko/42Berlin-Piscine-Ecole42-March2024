/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meroshen <meroshen@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:51:37 by meroshen          #+#    #+#             */
/*   Updated: 2024/03/24 23:20:14 by meroshen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	char			*key;
	char			*value;
	struct Node		*next;	
}t_list;

t_list	*create(char *p_key, char *p_value);
t_list	*add_node(t_list *p_head, char *p_key, char *p_value);
t_list	*remove_all(t_list *p_head);
char	*return_value(t_list *p_head, char *p_key);

t_list	*split_string_add_record(char *str, t_list *dict, t_list **ptr)
{
	int		i;
	char	*key;
	char	*value;
	char	*tmp;

	key = (char *)malloc(1000 * sizeof(char));
	value = (char *)malloc(1000 * sizeof(char));
	if (key == NULL || value == NULL )
		return (NULL);
	i = 0;
	while (*str != ':' && *str != '\0')
		key[i++] = *str++;
	key[i] = '\0';
	i = 0;
	str++;
	while (*str != '\0')
		value[i++] = *str++;
	value[i] = '\0';
	if (dict == NULL)
		dict = (create(key, value));
	else
		dict = add_node(dict, key, value);
	return (dict);
}
