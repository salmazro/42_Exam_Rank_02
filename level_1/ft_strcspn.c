#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *str, const char *ret)
{
	size_t	i = 0;
	size_t	a = 0;

	while (str[i])
	{
		a = 0;
		while (ret[a])
		{
			if (str[i] == ret[a])
				return (i);
			a++;
		}
		i++;
	}
	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int	main()
// {
// 	char s1[] = "hello 42 abu";
// 	char s2[] = "e";
// 	printf("%zu\n", ft_strcspn(s1, s2));
// }
