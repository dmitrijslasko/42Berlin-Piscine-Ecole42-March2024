/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdikarev <fdikarev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:15:59 by fdikarev          #+#    #+#             */
/*   Updated: 2024/03/17 21:40:27 by fdikarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_matrix(int matr[4][4]);

int		check_cols_bottom(int matr[4][4], char *input);
int		check_cols_top(int matr[4][4], char	*input);
int		check_rows_left(int matr[4][4], char	*input);
int		check_rows_right(int matr[4][4], char	*input);

int	check_columns(int matr[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((matr[0][i] == matr[1][i]) || (matr[0][i] == matr[2][i])
			|| (matr[0][i] == matr[3][i]) || (matr[1][i] == matr[2][i])
			|| (matr[1][i] == matr[3][i]) || (matr[2][i] == matr[3][i]))
			return (0);
		i++;
	}
	return (1);
}

int	calc_value(int *comb, int direction)
{
	int	visible_buildings;
	int	max_height;
	int	i;

	visible_buildings = 1;
	if (direction == 1)
		i = 0;
	else
		i = 3;
	max_height = comb[i];
	while ((i >= 0) && (i < 4))
	{
		if (comb[i] > max_height)
		{
			max_height = comb[i];
			visible_buildings++;
		}
		i += direction;
	}
	return (visible_buildings);
}

int	solve_and_print(int matr[4][4], char *input)
{
	if (check_cols_top(matr, input)
		&& check_cols_bottom(matr, input)
		&& check_rows_left(matr, input)
		&& check_rows_right(matr, input))
	{
		if (check_columns(matr) == 1)
		{
			print_matrix(matr);
			return (1);
		}
	}
	return (0);
}
