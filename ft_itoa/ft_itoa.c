#include <stdlib.h>
//#include <stdio.h>

static int check_size(long  i)
{
    int size = 0;

    if (i < 0)
    {
        size++;
        i *= -1;
    }
    while(i > 10)
    {
        i /= 10;
        size++;
    }
    return (size);
}

static void int_to_str(long n, char *str, int *i)
{
    if (n > 9)
    {
        int_to_str(n / 10, str, i);
        int_to_str(n % 10, str, i);
    }
    else
        str[(*i)++] = n + '0';
    
}
char *ft_itoa(int num)
{
    int size;
    int i;
    char *str;

    i = 0;
    size = check_size(num);
    str = malloc(sizeof(char) * (size + 1));
    if (!str)
        return (0);
    if (num < 0)
    {
        str[i++] = '-';
        num *= -1;
    }
    int_to_str(num, str, &i);
    str[i] = '\0';
    return (str);
}

/*
int main()
{
   char *str;

    str = ft_itoa(112233);
    printf("%s\n", str);
    return (0);
}
*/