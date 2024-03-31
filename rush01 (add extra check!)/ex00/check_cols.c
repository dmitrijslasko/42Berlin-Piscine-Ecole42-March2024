/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cols.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdikarev <fdikarev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:08:48 by fdikarev          #+#    #+#             */
/*   Updated: 2024/03/17 21:25:57 by fdikarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calc_value(int *comb, int direction);

int	check_cols_top(int matr[4][4], char	*input)
{
	int	i;
	int	j;
	int	col[4];

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			col[j] = matr[i][j];
			j++;
		}
		if (calc_value(col, 1) != (input[i] - '0'))
			return (0);
		i++;
	}
	return (1);
}

int	check_cols_bottom(int matr[4][4], char	*input)
{
	int	i;
	int	j;
	int	col[4];

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			col[j] = matr[i][j];
			j++;
		}
		if (calc_value(col, -1) != (input[i + 4] - '0'))
			return (0);
		i++;
	}
	return (1);
}
