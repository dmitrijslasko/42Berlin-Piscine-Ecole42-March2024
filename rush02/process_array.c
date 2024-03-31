int	ft_strlen(char *str);
#include <stdio.h>
#include <stdlib.h>

char	*fill_multiplier(char *multiplier, char *array)
{
	int i;

	i = 0;
	while (i < 3)
	{
		multiplier[i] = array[i];
		printf("%c", multiplier[i]);
		i++;
	}
}

char	*process_array(char *array)
{
	char	multiplier[3];
	char	*tail;
	int	array_len;
	int	i;

	while (ft_strlen(array) > 0)
	{
		array_len = ft_strlen(array);
		fill_multiplier(multiplier, array);
		printf(" x ");
		tail = (char *)malloc(sizeof(char) * (array_len - 3 + 1));
		if (tail == NULL)
			return (NULL);
		i = 0;
		tail[i] = '1';
		printf("%c", tail[i++]);
		while (i < array_len - 2)
		{
			tail[i] = '0';
			printf("%c", tail[i++]);
		}
		free(tail);
		array += 3;
		printf("\n");
	}
}