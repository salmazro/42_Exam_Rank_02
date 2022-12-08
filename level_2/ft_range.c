#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int i = 0;
	int length = end - start + 1;
	int *array;

    array = malloc(sizeof(int) * length);
	while(length > 0)
	{
		array[i] = start;
		start++;
		i++;
		length--;
	}
	return(array);
}


int		main()
{
	int start;
	int end;

	start = 1;
	end = 7;
	int *array;

	array = ft_range(start, end);
	int i = 1;
	while(i <= 0)
	{
		printf("%d", array[i]);
		i++;
	}
}
