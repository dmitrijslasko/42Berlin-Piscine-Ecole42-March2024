#include <stdio.h>
#include <unistd.h>

int get_max_divisor(int n)
{   
    int i;
    int max_divisor;

    i = 0;
    max_divisor = 1;
    while(i < n)
    {
        max_divisor = max_divisor * 10;
        i++;
    }
    return (max_divisor);
}

void ft_print_combn(int n)
{
    int digits[10];
    int number;
    int index;
    int max_number;
    int temp_number;

    max_number = get_max_divisor(n);
    number = 0;
    while (number < max_number)
    {   
        temp_number = number;
        index = 0;
        while (index < n)
        {
            digits[index] = temp_number % 10;
            printf("%d", digits[index]);
            temp_number /= 10;
            index++;
        }
        printf("\n");
        number++;
    }
}


int main(void)
{
    ft_print_combn(7);
}