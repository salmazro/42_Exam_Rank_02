#include <unistd.h>

void ft_putchar(int c)
{
	write(1 , &c, 1);
}

void print_char(char *s1, char *s2)
{
	int tab[256] = {0};
	int i = 0;

	while (s1[i])
	{
		if (tab[s1[i]] != 1)
		{
			tab[s1[i]] = 1;
			ft_putchar(s1[i]);
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (tab[s2[i]] != 1)
		{
			tab[s2[i]] = 1;
			ft_putchar(s2[i]);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		print_char(av[1], av[2]);
	write(1, "\n", 1);
}