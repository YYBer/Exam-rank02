#include <stdlib.h>
//#include <stdio.h>

char    *creat_str(char *s1, char *s2, int len)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(s2[j] && j < len)
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return s1;
}

char    **ft_split(char *str)
{
    int i;
    int start;
    int end;
    int wc;
    int k;
    char **result;

    i = 0;
    wc = 0;
    while(str[i])
    {
        while(str[i] == ' ' || str[i] == '\t')
            i++;
        if (str[i] >= 33 && str[i] <= 126 && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
            wc++;
        i++;
    }
    //printf("wc: %d\n", wc);
    result = (char **)malloc(sizeof(char *) * (wc + 1));
    if (!result)
        return 0;
    result[i] = 0;
    i = 0;
    k = 0;
    while(str[i])
    {
        while(str[i] == ' ' || str[i] == '\t')
            i++;
        start = i;
        //printf("start: %d\n", start);
        while(str[i] >= 33 && str[i] <= 126)
            i++;
        end = i;
        //printf("end: %d\n", end);
        if(start < end)
        {
            result[k] = malloc(sizeof(char) * (end - start));
            if (!result[k])
                return 0;
            result[k] = creat_str(result[k], &str[start], (end - start));
            k++;
        }
    }
    return result;
}

int main()
{
    char **str;

    str = ft_split("  starting and ending   ");
    printf("%s\n", str[0]);
    printf("%s\n", str[1]);
    printf("%s\n", str[2]);
    printf("%s\n", str[3]);
    //printf("%s\n", str[4]);
}