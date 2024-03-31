/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:02:46 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/21 15:45:58 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_param(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*temp;

	i = 1;
	while (i < (argc + 1) / 2)
	{
		temp = argv[i];
		argv[i] = argv[argc - i];
		argv[argc - i] = temp;
		i++;
	}
	i = 1;
	while (i < argc)
		ft_print_param(argv[i++]);
	return (0);
}
