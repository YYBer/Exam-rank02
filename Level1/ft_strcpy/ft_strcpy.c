char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    if (s2 == 0)
        return 0;
    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}