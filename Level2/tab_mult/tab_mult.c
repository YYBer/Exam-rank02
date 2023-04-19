#include <unistd.h>

int atoi(char *str)
{
    int num;
    int i;

    num = 0;
    i = 0;
    while(*str)
        num = num * 10 + *str++ - '0';
    return (num);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void    ft_putint(int   num)
{
    char str[] = "0123456789";
    if (num >= 10)
        ft_putint(num / 10);
    write(1, &str[num % 10], 1);
}

int main (int argc, char **argv)
{
    int i;
    int num;
    char    c;

    if (argc == 2)
    {
        i = 1;
        num = atoi(argv[1]);
        while (i <= 9)
        {
            c = i + '0';
            write(1, &c, 1);
            write(1, " x ", 3);
            ft_putstr(argv[1]);
            write(1, " = ", 3);
            num *= i;
            ft_putint(num);
            write(1, "\n", 1);
            num = atoi(argv[1]);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}