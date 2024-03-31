/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_inputs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdikarev <fdikarev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:56:06 by fdikarev          #+#    #+#             */
/*   Updated: 2024/03/17 19:56:12 by fdikarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	parse_input(char input[16], char *user_input)
{
	int	i;
	int	spaces;
	int	digits;

	spaces = 0;
	digits = 0;
	i = 0;
	while (*user_input)
	{
		if (*user_input == ' ')
			spaces++;
		else if (*user_input >= '1' && *user_input <= '4')
		{
			input[i] = *user_input;
			digits++;
			i++;
		}
		user_input++;
	}
	if (spaces == 15 && digits == 16)
		return (0);
	return (1);
}
