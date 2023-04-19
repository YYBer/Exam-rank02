//#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int smaller;
    int bigger;
    int *result;
    int i;

    if (start < end)
    {
        smaller = start;
        bigger = end;
    }
    else
    {
        smaller = end;
        bigger = start;
    }
    result = malloc(sizeof(int) * (bigger - smaller));
    if (!result)
        return 0;
    i = 0;
    if (bigger > 0)
    {
        while(smaller <= bigger)
        {
            result[i] = bigger;
            bigger --;
            i++;
        }
    }
    else
    {
        while(smaller <= bigger)
        {
            result[i] = smaller;
            smaller++;
            i++;
        }
    }
    return result;
}
/*
int main()
{
    int *result;

    result = ft_rrange(0, 0);
    printf("%d\n", result[0]);
    printf("%d\n", result[1]);
    //printf("%d\n", result[2]);
    //printf("%d\n", result[3]);

}
*/