#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if (n >= 10)
    {
        ft_putnbr(n / 10);
        n = n % 10;
    }
    if (n < 10)
    {
        ft_putchar(n + 48);
    }
}
