#include <unistd.h>
//#include <stdio.h>

int check_tab_or_space(int c)
{
    if (c == '\t' || c == ' ')
        return (1);
    return (0);
}

int check_char(int c)
{
    if (c >= 33 && c <= 126)
        return (1);
    return (0);
}

void    epur_str(char *str)
{
    int i;

    i = 0;
    while(check_tab_or_space(str[i]))
        i++;
    while(str[i] != '\0')
    {
        //if (check_tab_or_space(str[i] != 1))
        //    write(1, &str[i], 1);
        if (check_char(str[i]))
            write(1, &str[i], 1);
        while(check_char(str[i]) && check_tab_or_space(str[i + 1]))
            i++;
        if (check_tab_or_space(str[i]) && check_char(str[i + 1]))
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        epur_str(argv[1]);
    write(1, "\n", 1);
}