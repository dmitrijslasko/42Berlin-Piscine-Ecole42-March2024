/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:13:43 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/17 21:53:34 by fdikarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
void	print_matrix(int matr[4][4]);
void	init_combs(int *combs);
void	solver(char input[16]);
void	print_error(void);
int		parse_input(char input[16], char *user_input);

int	main(int argc, char *argv[])
{
	char	*input;

	input = (char *)malloc(17);
	if (input == NULL)
		return (0);
	if (input == 0)
	{
		print_error();
		return (1);
	}
	if (argc != 2)
		print_error();
	else
	{
		if (parse_input(input, argv[1]) == 0)
			solver(input);
		else
			print_error();
	}
	free(input);
	return (0);
}
