#include <unistd.h>

void    ft_hex(int  i)
{
    char hex[] = "0123456789abcdef";
    if (i >= 16)
        ft_hex (i / 16);
    write(1, &hex[i % 16], 1);
}

int ft_atoi(char *str)
{
    int num;
    int i;

    i = 0;
    num = 0;
    while(str[i])
    {
        num = num * 10 + str[i] - '0';
        i++;
    }
    return (num);
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = ft_atoi(argv[1]);
        ft_hex(i);
    }
    write(1, "\n", 1);
}