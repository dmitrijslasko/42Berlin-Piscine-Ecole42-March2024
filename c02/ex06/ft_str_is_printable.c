int ft_str_is_printable(char *str)
{
    if (!*str)
        return (1);
    while (*str)
    {
        if (!(*str > 31 && *str < 127))
            return (1);
        str++;
    }
    return (0);
}

#include <stdio.h>
int main(void)
{
    char *str = "ohsadoihasiodhasiohdoisahois";
    printf("%s is printable characters only? 0 if true, 1 if false \nRESULT: %d\n", str, ft_str_is_printable(str));
    return (0);
}