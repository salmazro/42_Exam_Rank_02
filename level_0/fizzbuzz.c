#include <unistd.h>

void	pr_num(int nbr)
{
	if (nbr > 9)
		pr_num(nbr/10);
	write(1, &"0123456789"[nbr % 10], 1);
}

int	main()
{
	int	nbr = 1;

	while (nbr <= 100)
	{
		if (nbr % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (nbr % 3 == 0)
			write(1, "fizz", 4);
		else if (nbr % 5 == 0)
			write(1, "buzz", 4);
		else
			pr_num(nbr);
		write(1, "\n", 1);
		nbr++;
	}
}
