/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rows.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdikarev <fdikarev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:08:48 by fdikarev          #+#    #+#             */
/*   Updated: 2024/03/17 21:26:13 by fdikarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calc_value(int *comb, int direction);

int	check_rows_left(int matr[4][4], char	*input)
{
	int	i;
	int	j;
	int	row[4];

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			row[j] = matr[j][i];
			j++;
		}
		if (calc_value(row, 1) != (input[i + 8] - '0'))
			return (0);
		i++;
	}
	return (1);
}

int	check_rows_right(int matr[4][4], char	*input)
{
	int	i;
	int	j;
	int	row[4];

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			row[j] = matr[j][i];
			j++;
		}
		if (calc_value(row, -1) != (input[i + 12] - '0'))
			return (0);
		i++;
	}
	return (1);
}
