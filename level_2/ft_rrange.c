// backward
#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int *array;
	int i = 0;
	int length = end - start + 1;

	if (start > end)
		return (ft_rrange(end, start));
	array = malloc(sizeof(int) * length);
	if (array)
	{
		while (i < length)
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	return (array);
}

// int main(void)
// {
// 	int i;
// 	int *prt;

// 	i = 0;
// 	prt = ft_rrange(-1, 2);
// 	while(i <= 3)
// 	{
// 		printf("%d ", prt[i]);
// 		i++;
// 	}
// 	printf("\n");
// }