#include <unistd.h>

void    check_repeat(char c)
{
    int i;

    i = 0;
    if (c >= 'a' && c <= 'z')
        i = c - 'a' + 1;
    else    if (c >= 'A' && c <= 'Z')
        i = c - 'A' + 1;
    else 
        i = 1;
    while(i--)
    {
        write(1, &c, 1);
    }
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while(argv[1][i])
        {
            check_repeat(argv[1][i]);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}