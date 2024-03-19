int ft_str_is_uppercase(char *str)
{
    int i;
    
    i = 0;
    if(str[i] == '\0')
        return (1);
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return (1);
        i++;
    }
    return (0);
}

#include <stdio.h>
int main(void)
{
    char *str = "asdasdasdasdasdafa";
    printf("%s is UPPERCASE letters only? 0 if true, 1 if false \nRESULT: %d\n", str, ft_str_is_uppercase(str));
    return (0);
}