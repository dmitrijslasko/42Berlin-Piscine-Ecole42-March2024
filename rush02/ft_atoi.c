int	ft_atoi(char *str)
{
	int	number;

	number = 0;
	while (*str)
	{
		number = number * 10 + (*str - '0') % 10; 
		str++;
	}
	return (number);
}