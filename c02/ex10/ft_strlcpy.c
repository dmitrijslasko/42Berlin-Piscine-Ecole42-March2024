unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;

    i = 0;
    while (i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (i);
}

#include <stdio.h>
int main(void)
{
    char str1[] = "1234567890";
    char str2[256];

    printf("\nSTRING 1 before the function call: %s\n", str1);
    printf("STRING 2 before the function call: %s\n", str2);
    printf("----------------------------------------------------------------------\n");
    
    ft_strlcpy(str2, str1, 5);

    printf("STRING 1 after the function call: %s\n", str1);
    printf("STRING 2 after the function call: %s\n\n", str2);
} 