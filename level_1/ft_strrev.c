#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return(i);
}

char    *ft_strrev(char *str)
{
    char s;
    int a = 0;
    int m = ft_strlen(str) - 1;

    while (m > a)
    {
        s = str[a];
        str[a] = str[m];
        str[m] = s;
        a++;
        m--;
    }
    return (str);
}


int main()
{
    char s[] = "Hello";
    printf("%s\n", ft_strrev(s));
    ft_strrev(s);
}
