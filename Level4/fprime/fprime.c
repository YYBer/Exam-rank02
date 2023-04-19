#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int factor;

    if (argc == 2)
    {
        i = atoi(argv[1]);
        if (i == 1)
            printf("1");
        factor = 1;
        while(++factor <= i)
        {
            if (i % factor == 0)
            {
                printf("%d", factor);
                if (i == factor)
                    break ;
                printf("*");
                i = i / factor;
                factor = 1;
            }
        }
    }
    printf("\n");
}