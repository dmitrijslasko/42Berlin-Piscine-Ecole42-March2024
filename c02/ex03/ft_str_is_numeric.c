/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlasko <dmlasko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:33:42 by dmlasko           #+#    #+#             */
/*   Updated: 2024/03/12 10:54:48 by dmlasko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_numeric(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                if (!(str[i] >= '0' && str[i] <= '9'))
                        return (1);
        i++;
        }
        return (0);
}
/* 
#include <stdio.h>
int main(void)
{
    char *str = "1231251512213215676578";
    printf("%s is numeric (digits only)? 0 if true,"
        " 1 if false \nRESULT: %d\n", str, ft_str_is_numeric(str));
    return (0);
}
 */