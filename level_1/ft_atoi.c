#include <stdio.h>

int	ft_atoi(const char *str)
{
	size_t	i = 0;
	int		x = 0;
	int		sign = 1;

	while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-')
		sign *= -1;
	if (str[x] == '-' || str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		i = i * 10 + str[x] - '0';
		x++;
	}
	return (sign * i);
}

// int main()
// {
//     printf("%d\n", ft_atoi("-12334bjhc"));
// }
