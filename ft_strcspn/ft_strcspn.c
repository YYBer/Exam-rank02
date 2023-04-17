#include <stdlib.h>
//#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while(s[i])
    {
    	j = 0;
        while(reject[j])
        {
            if (s[i] == reject[j])
                return i;
            j++;
        }
        i++;
    }
    return i;
}
/*
int main()
{
    char s1[] = "test dfd";
    char s2[] = "es";

    printf("%zu\n", ft_strcspn(s1, s2));
}
*/
