#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	char *str;
	char *abk;
	char *mee;
	int i = 0;

	if (!(str = (char *)malloc(16)))
		return (NULL);
	abk = str;
	if (nbr < 0)
		abk[i++] = '-';
	if (nbr > 0)
		nbr = -nbr;
	if (nbr <= -10)
	{
		mee = ft_itoa(-(nbr / 10));
		while (*mee)
			abk[i++] = *mee++;
	}
	abk[i] = '0' - nbr % 10;
	abk[i + 1] = '\0';
	return (str);
}

int main(void)
{
	printf("%s\n", ft_itoa(33));
	printf("%s\n", ft_itoa(-33));
	printf("%s\n", ft_itoa(0));
	return (0);
}