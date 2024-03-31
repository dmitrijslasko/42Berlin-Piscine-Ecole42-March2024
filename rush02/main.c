/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:47:51 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/23 19:58:15 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
//int	ft_atoi(char *str);
//char	*reverse_array(char *str);
char	*add_zeros(char* array);
//void	break_number(char *str);
void	process_array(char *array);

int	main(int argc, char *argv[])
{
	char	*array_with_zeros;
	char	*array;
	int	i;

	if (argc != 2)
		return (0);
	printf("%s =\n", argv[1]);

	array = argv[1];

	i = 0;
	array_with_zeros = add_zeros(array);
	ft_putchar('\n');
	process_array(array_with_zeros);
	free(array_with_zeros);
	return (0);
}