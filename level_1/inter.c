#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_inter(char *s1, char *s2)
{
	int tab[256] = {0};
	int i = 0;

	while (s1[i])
	{
		tab[s1[i]] = 1;
		i++;
	}
	i = 0;
	while(s2[i])
	{
		if(tab[(int)s2[i]] == 1)
		{
			ft_putchar(*s2);
			*s2++;
		}
		*s2++;
	}
}


int main(int ac, char **av)
{
	if (ac == 3)
		print_inter(av[1], av[2]);
	write(1, "\n", 1);
}