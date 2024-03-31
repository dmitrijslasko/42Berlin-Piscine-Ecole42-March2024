:%s/////;g:%s/////g* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:46:17 by abadun            #+#    #+#             */
/*   Updated: 2024/03/12 13:41:42 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_out_a_row(int x, char c_left, char c_mid, char c_right)
{
	int	x_counter;

	x_counter = 0;
	while (x_counter < x)
	{
		if (x_counter == 0)
			ft_putchar(c_left);
		else if (x_counter == x - 1)
			ft_putchar(c_right);
		else
			ft_putchar(c_mid);
		x_counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		y_counter;
	char	*chars;

	chars = "o-o" "| |" "o-o";
	if (x > 0 && y > 0)
	{
		print_out_a_row(x, chars[0], chars[1], chars[2]);
		y_counter = 0;
		while (y_counter < y - 2)
		{
			print_out_a_row(x, chars[3], chars[4], chars[5]);
			y_counter++;
		}
		if (y_counter == y - 1)
			print_out_a_row(x, chars[6], chars[7], chars[8]);
	}
}

//chars = "o-o" "| |" "o-o"; 	//rush00
//chars = "/*\\" "* *" "\\*/"; 	//rush01
//chars = "ABA" "B B" "CBC"; 	//rush02
//chars = "ABC" "B B" "ABC"; 	//rush03
//chars = "ABC" "B B" "CBA"; 	//rush04
