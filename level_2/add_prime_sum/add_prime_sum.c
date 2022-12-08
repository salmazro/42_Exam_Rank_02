#include <unistd.h>

int     ft_atoi(const char *str);
void    ft_putchar(char c);
void    ft_putnbr(int n);

int is_prime(int num)
{
	int i = 3;

	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num > 2)
		return (0);
	while (i < (num / 2))
	{
		if (num % i == 0)
			return 0;
		i += 2;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i = 0;
	int nb = ft_atoi(av[1]);

	if (ac == 2)
	{
		while (nb > 0)
			if (is_prime(nb--))
				i += (nb + 1);
		ft_putnbr(i);
	}
	if (ac != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
}
