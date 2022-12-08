int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "shama";
// 	int x = ft_strlen(str);
// 	printf("%d",x);
// }
