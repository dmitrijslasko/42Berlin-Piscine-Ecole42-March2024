/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:52:05 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/14 15:25:57 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
	return (1);
}

int	ft_char_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((i > 0 && str[i] >= 'a' && str[i] <= 'z')
			&& ft_char_is_alpha(str[i - 1]) == 0
			&& ft_char_is_numeric(str[i - 1]) == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}

//#include <stdio.h>
//int main(void)
//{
//    char str[] = "salut, COMMENT tu vas ? 42mots"
//             " quarante-deux; cinquante+et+un";
//    printf("\nString before: %s\n", str);
//    printf("String after: %s\n", ft_strcapitalize(str));
//    printf("String after: %s\n\n", str);

//    return (0);
//}