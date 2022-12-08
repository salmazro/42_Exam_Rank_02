#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (s1);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s1[] = "shama";
// 	char s2[] = "saeed";

// 	strcpy(s1,s2);
// 	printf("org -> %s\n",s1);
// 	ft_strcpy(s1,s2);
// 	printf("ft -> %s\n",s1);
// }
