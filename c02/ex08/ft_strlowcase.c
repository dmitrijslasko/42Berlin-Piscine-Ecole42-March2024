char *ft_strlowcase(char *str)
{
    while(*str)
    {
        if (*str >= 'A' && *str <= 'Z')
            *str -= 32;
        str++;
    }
    return (str);
}

// #include <stdio.h>
// int main(void)
// {
//     char str[] = "ONCE WE WERE UPPERCASE LETTERS... 1234567890!@#$^&*()... we were always lowercase!";
//     printf("\nString before: %s\n", str);
//     printf("String after: %s\n", ft_strlowcase(str));
//     printf("String after: %s\n\n", str);
//     return (0);
// }