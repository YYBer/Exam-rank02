#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i;
    int k;
    char *str;

    i = 0;
    while(src[i])
        i++;
    str = malloc(sizeof(char) * (i + 1));
    if (!str)
        return 0;
    k = 0;
    while(k <= i)
    {
        str[k] = src[k];
        k++;
    }
    str[k] = '\0';
    return str;
}