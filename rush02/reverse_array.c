#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);

char	*reverse_array(char *str)
{
	char	temp;
	char	*rev_array;
	int	i;
	int	len;

	len = ft_strlen(str);
	rev_array = (char *)malloc(sizeof(char) * len);
	if (rev_array == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		rev_array[i] = str[i];
		i++;
	}
	i = 0;
	while (i < len / 2)
	{
		temp = rev_array[i];
		rev_array[i] = rev_array[len - i - 1];
		rev_array[len - i - 1] = temp;
		i++;
	}
	return (rev_array);
}