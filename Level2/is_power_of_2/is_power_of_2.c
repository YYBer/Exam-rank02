//#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    int i;

    i = 2;
    if (n == 1)
        return (1);
    if (n == 0)
        return (0);
    while (n >= 2)
    {
        if (n % 2 == 0)
            n /= 2;
        else 
            return (0);
    }
    return (1);
}
/*
int main()
{
    int i = 0;
    printf("%d\n", is_power_of_2(i));
}
*/