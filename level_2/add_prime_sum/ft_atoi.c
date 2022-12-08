#include <stdio.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int a = 0;
    int sign = 1;

    while (str[i] == ' ' && str[i] == '\t' && str[i] == '\n' && str[i] == '\f'
            && str[i] == '\r' && str[i] == '\v')
            i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        a = a * 10 + (str[i] - '0');
        i++;
    }
    return (a * sign);
}
