#include <unistd.h>

void    rostring(char *str)
{
    int i;
    int start;
    int end;
    int flag;

    i = 0;
    flag = 0;
    while(str[i] == 32 || str[i] == '\t')
        i++;
    start = i;
    while(str[i] >= 33 && str[i] <= 126)
        i++;
    end = i;
    while(str[i] == 32 || str[i] == '\t')
        i++;
    while(str[i])
    {
        while(str[i] == 32 || str[i] == '\t')
            i++;
        if (str[i] >= 33 && str[i] <= 126 && str[i + 1] == 32 || str[i + 1] == '\t')
        {
            write(1, &str[i], 1);
            write(1, " ", 1);
        }
        else
            write(1, &str[i], 1);
        flag = 1;
        i++;
    }
    if (flag == 1)
        write(1, " ", 1);
    i = 0;
    while(start < end && str[start])
    {
        write(1, &str[start], 1);
        start++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 1)
        rostring(argv[1]);
    write(1, "\n", 1);
}