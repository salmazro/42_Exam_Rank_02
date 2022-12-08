#include <unistd.h>

void    ft_putnbr(int nb)
{
    char m;

    if (nb >= 10)
        ft_putnbr(nb / 10);
    m = (nb % 10) + '0';
    write(1, &m, 1);
}

int main(int ac, char **av)
{
    (void) av;
    ft_putnbr(ac - 1);
    write(1, "\n", 1);
}