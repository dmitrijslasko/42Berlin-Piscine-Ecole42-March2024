/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:28:01 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/11 14:24:17 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>

int main(void)
{
    int size;
    int i;
    int numbers[] = {1,3,5,12,0,-2,123,55,777,0};

    size = sizeof(numbers) / sizeof(numbers[0]);
    i = 0;
    while (i < size)
        printf("%d ", numbers[i++]);
    printf("\nSize of the numbers array: %d\n", size);

    ft_sort_int_tab(numbers, size);
    i = 0;
    while (i < size)
        printf("%d ", numbers[i++]);
}
*/
