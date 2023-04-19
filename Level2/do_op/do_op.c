#include <stdlib.h>
#include <stdio.h>

int    do_op(int a, int b, char c)
{
    if (c == '+')
        return (a + b);
    else if (c == '*')
        return (a * b);
    else if (c == '-')
        return (a - b);
    else if (c == '/')
        return (a / b);
    return 0;
}

int main(int argc, char **argv)
{
    int a;
    int b;
    if (argc == 4)
    {
        a = atoi(argv[1]);
        b = atoi(argv[3]);
        printf("%d", do_op(a, b, argv[2][0]));
    }
    printf("\n");
}