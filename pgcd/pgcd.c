#include <stdio.h>
#include <stdlib.h>

int    ft_pgcd(int i, int j)
{
    int bigger;
    int smaller;
    int o;

    if (i > j)
    {
        bigger = i;
        smaller = j;
    }
    else
    {
        bigger = j;
        smaller = i;
    }
    o = smaller;
    while(smaller >= 1)
    {
        if (bigger % smaller != 0 || o % smaller != 0)
            smaller--;
        else
            break;
    }
    return smaller;
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int result;
    if (argc == 3)
    {
        i = atoi(argv[1]);
        j = atoi(argv[2]);
        result = ft_pgcd(i, j);
        printf("%d", result);
    }
    printf("\n");
}