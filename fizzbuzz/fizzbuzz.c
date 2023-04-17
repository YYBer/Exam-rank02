#include <unistd.h>

void    ft_nbrwrite(int i)
{
    char str[] = "0123456789";
    if (i >= 10)
        ft_nbrwrite(i / 10);
    write(1, &str[i % 10], 1);
}

void    ft_fizzbuzz(int i)
{
    while(i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_nbrwrite(i);
        write(1, "\n", 1);
        i++;
    }
}

int main()
{
    ft_fizzbuzz(1);
}