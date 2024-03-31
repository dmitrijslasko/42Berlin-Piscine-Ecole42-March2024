/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:58:39 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/11 14:25:10 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int num1 = 10;
	int num2 = 20;

	int *pointer1 = &num1;
	int *pointer2 = &num2;	

	printf("The number 1 before: %d\n", num1);
	printf("The number 2 before: %d\n", num2);
	ft_swap(pointer1, pointer2);
	printf("The number 1 after: %d\n", num1);
	printf("The number 2 after: %d\n", num2);

	return (0);
}
*/
