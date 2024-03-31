#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result_str;
	int		i;
	int		j;
	int		c;

	result_str = (char *)malloc(sizeof(strs) + sizeof(sep) * (size - 1));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result_str[c++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			result_str[c++] = sep[j++];
		i++;
	}
	result_str[c] = '\0';
	return (result_str);
}

#include <stdio.h>
int	main(void)
{
	char *sep;
	char *strs[4];
	char *str;
	strs[0] = "abc";
	strs[1] = "zux";
	strs[2] = "123";
	strs[3] = "poh";
	sep = " ";

	str = ft_strjoin(0, strs, " ");
	free(str);
	printf("%s", str);

}
