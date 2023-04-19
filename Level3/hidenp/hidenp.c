#include <unistd.h>
int main(int argc, char **argv)
{
    int i;
    int j;
    int k;

    if (argc == 3)
    {
        i = 0;
        j = 0;
        k = 0;
        while(argv[1][k])
            k++;
        while(argv[1][i] && argv[2][j])
        {
            if (argv[2][j] == argv[1][i])
                i++;
            j++;
        }
        if (i == k)
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}