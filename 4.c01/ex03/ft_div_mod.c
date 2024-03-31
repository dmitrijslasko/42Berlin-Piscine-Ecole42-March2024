/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:55:41 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/11 14:24:02 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int division_result;
    int remainder_result;

    num1 = 10;
    num2 = 2;

    ft_div_mod(num1, num2, &division_result, &remainder_result);
    
    printf("The number 1: %d\n", num1);
	printf("The number 2: %d\n", num2);
	printf("Div: %d\n", division_result);
	printf("Mod: %d\n", remainder_result);

    return (0);
}
*/
