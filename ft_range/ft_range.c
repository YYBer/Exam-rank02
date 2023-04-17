#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int i;
    int j;
    int *result;

    i = end - start;
    result = malloc(sizeof(int) * (i + 1));
    if (!result)
        return (0);
    j = 0;
    while(start <= end)
    {
        result[j] = start;
        start++;
        j++;
    }
    result[j] = '\0';
    return (result);
}

int main()
{
	int *i;

	i = ft_range(1, 4);
    printf("%d\n", i[0]);
}
