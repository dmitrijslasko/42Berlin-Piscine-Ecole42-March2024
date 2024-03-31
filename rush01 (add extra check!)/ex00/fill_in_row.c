/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_in_row.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdikarev <fdikarev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:13:58 by fdikarev          #+#    #+#             */
/*   Updated: 2024/03/17 20:14:19 by fdikarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_in_row(int matr[4][4], int *combs, int i, int row)
{
	matr[row][0] = combs[i] / 1000;
	matr[row][1] = (combs[i]) / 100 % 10;
	matr[row][2] = (combs[i] / 10) % 10;
	matr[row][3] = combs[i] % 10;
}
