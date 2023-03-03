/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:55:21 by user              #+#    #+#             */
/*   Updated: 2023/02/17 16:13:05 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    get_second(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
int get_int(char *str)
{
    int num;
    int i;

    i = 0;
    num = 0;
    while(str[i] != '\0')
    {
        num = num * 10 + str[i] - 48;
        i++;   
    }
    return(num);
}

void get_result(int i)
{
    char c;
    if (i > 10)
        get_result(i / 10);
    c = i % 10 + 48;
    write(1, &c, 1);
}

int main (int argc, char **argv)
{
    int i;
    int a;
    char    c;

    i = 1;
    a = 0;
    if (argc == 2)
    {
        while(i <= 9 && *argv[1])
        {
            c = i + 48;
            write(1, &c, 1);
            write(1," x ", 3);
            get_second(argv[1]);
            write(1, " = ", 3);
            a = get_int(argv[1]);
            a *= i;
            get_result(a);
            write(1, "\n", 1);
            i++;
        }
    }
    else write(1, "\n", 1);
}