#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int start;
    int end;
    if (argc == 2)
    {
        i = 0;
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        start = i;
        while(argv[1][i] >= 33 && argv[1][i] <= 126)
            i++;
        end = i;
        while (start < end)
            write(1, &argv[1][start++], 1);
    }
    write(1, "\n", 1);
}