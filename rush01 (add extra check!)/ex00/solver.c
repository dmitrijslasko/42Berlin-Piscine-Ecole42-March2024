/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdikarev <fdikarev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:11:22 by fdikarev          #+#    #+#             */
/*   Updated: 2024/03/17 21:54:37 by fdikarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_error(void);
void	init_combs(int *combs);

void	fill_in_row(int matr[4][4], int *combs, int i, int row);

int		solve_and_print(int matr[4][4], char *input);

void	fill_row_nums_from_n(int n, int c[4])
{
	c[0] = n % 24;
	n /= 24;
	c[1] = n % 24;
	n /= 24;
	c[2] = n % 24;
	n /= 24;
	c[3] = n;
}

void	solver(char input[16])
{
	int	c[4];
	int	matr[4][4];
	int	combs[24];
	int	i;

	init_combs(combs);
	c[0] = 0;
	i = 0;
	while (i < 24 * 24 * 24 * 24)
	{
		fill_row_nums_from_n(i, c);
		fill_in_row(matr, combs, c[0], 0);
		fill_in_row(matr, combs, c[1], 1);
		fill_in_row(matr, combs, c[2], 2);
		fill_in_row(matr, combs, c[3], 3);
		if (solve_and_print(matr, input) == 1)
			return ;
		i++;
	}
	print_error();
}
