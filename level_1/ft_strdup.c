#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *dst;
    int i = 0;
    int j = 0;

    while (src[i])
        i++;
    dst = malloc(i + 1);
    if (!dst)
        return (NULL);
    i = 0;
    while (src[i])
    {
        dst[j] = src[i];
        j++;
        i++;
    }
    dst[j] = '\0';
    return (dst);
}

int main()
{
    char *src = "hello";
    char *dst = "world";
    printf("src is :%s \n", src);
    printf("dst is :%s \n", dst);
    dst = ft_strdup(src);
    printf("new dst is : %s \n", dst);
}
