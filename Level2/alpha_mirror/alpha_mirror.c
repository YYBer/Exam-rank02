#include <unistd.h>
int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while(argv[1][i])
        {
            if (argv[1][i] >= 65 && argv[1][i] <= 90)
                argv[1][i] = 'Z' - (argv[1][i] - 'A');
            else if (argv[1][i] >= 97 && argv[1][i] <= 122)
                argv[1][i] = 'z' - (argv[1][i] - 'a');     
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}