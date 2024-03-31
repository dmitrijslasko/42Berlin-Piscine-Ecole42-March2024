#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}
/* 
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;
	int	size;

	min = -10;
	max = -5;

	size = ft_ultimate_range(&range, min, max);

	i = 0;
	while (i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}
 */