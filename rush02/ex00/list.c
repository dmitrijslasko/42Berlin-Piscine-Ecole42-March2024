/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabhinav <aabhinav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:08:21 by meroshen          #+#    #+#             */
/*   Updated: 2024/03/24 22:30:45 by aabhinav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	ft_strcmp(char *s1, char *s2);

typedef struct Node
{
	char			*key;
	char			*value;
	struct Node		*next;	
}t_list;

t_list	*create(char *p_key, char *p_value)
{
	t_list *tmp = (t_list*)malloc(sizeof(t_list));
	if (tmp == NULL)
		return (NULL);
	tmp -> key = p_key;
	tmp -> value = p_value;
	tmp -> next = NULL;
	return (tmp);
}

t_list	*add_node(t_list *p_head, char *p_key, char *p_value)
{
	t_list *tmp =  (t_list*)malloc(sizeof(t_list));
	if (tmp == NULL)
                return (NULL);
	tmp -> key = p_key;
	tmp -> value = p_value;
	tmp -> next = p_head;
	return (tmp);
}

t_list	*remove_all(t_list *p_head)
{
	char	*data;

	while (p_head != NULL)
	{
		t_list	*p;

		p = p_head;
		p_head = p_head -> next;
		data = p -> key;
		free(data);
		data = p -> value;
		free (data);
		free(p);
	}
	return (NULL);
}

char	*return_value(t_list *p_head, char *p_key)
{
	while (p_head != NULL)
	{	if (ft_strcmp(p_head -> key, p_key)== 0)
	      		return (p_head -> value); 	
		p_head = p_head -> next;
	}
	return (NULL);	
}
