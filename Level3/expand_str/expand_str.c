#include <unistd.h>
#include <stdio.h>

void    expand_str(char *str)
{
    int i;
    int start;
    int end;
    int flag;
    int	len;

    i = 0;
    flag = 0;
    len =0;
    while(str[len])
    	len++;
    while(str[len] == ' ' || str[len] == '\t' || str[len] == '\0')
	len--;
	len += 1;
    while(str[i])
    {
    	if (i == len)
        	break ;
        while(str[i] == ' ' || str[i] == '\t')
        {
            i++;
            flag = 1;
        }
        if (flag == 1)
            write(1, "   ", 3);
        flag = 0;
        start = i;
        while(str[i] >= 33 && str[i] <= 126)
            i++;
        end = i;
        while(start < end)
            write(1, &str[start++], 1);
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
         expand_str(argv[1]);
    write(1, "\n", 1);
}
