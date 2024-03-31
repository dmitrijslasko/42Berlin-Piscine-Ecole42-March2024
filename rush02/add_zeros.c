#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);

char	*add_zeros(char* array)
{
	int	array_len;
	int	zeros_count;
	char	*processed_array;
	int	i;
	
	array_len = ft_strlen(array);
	if (array_len % 3 == 0)
		zeros_count = 0;
	else
		zeros_count = 3 - array_len % 3;
	processed_array = (char *)malloc(sizeof(char) * (array_len + zeros_count));
	if (processed_array == NULL)
		return (NULL);
	i = 0;
	while (i < array_len + zeros_count)
	{
		while (i < zeros_count)
		{
			processed_array[i] = '0';
			i++;
		}
		processed_array[i] = array[i - zeros_count];
		i++;
	}
	return (processed_array);
}