/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:29:49 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/11 14:21:19 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int division_result;
    int remainder_result;

    a = 20;
    b = 4;
    
    printf("The number 1: %d\n", a);
	printf("The number 2: %d\n", b);
    ft_ultimate_div_mod(&a, &b);
	printf("Div: %d\n", a);
	printf("Mod: %d\n", b);
    return (0);
}
*/
