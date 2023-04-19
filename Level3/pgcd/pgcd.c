/*Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
*/
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
