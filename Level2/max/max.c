//#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int i;
    int max;

    i = 0;
    max = tab[0];
    if (!(tab))
        return (0);
    while(i <= len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}
/*
int main()
{
    int tab[] = {-42, 0, -5, -64, -2, -68, -1};
    int len = 7;

    printf("%d\n", max(tab, len));
}
*/