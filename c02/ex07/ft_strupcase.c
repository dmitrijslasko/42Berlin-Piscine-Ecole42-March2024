char *ft_strupcase(char *str)
{
    while(*str)
    {
        if (*str >= 'a' && *str <= 'z')
            *str -= 32;
        str++;
    }
    return (str);
}