/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 21:34:57 by yli               #+#    #+#             */
/*   Updated: 2023/04/10 21:34:58 by yli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int inter(char *str, char c, int len)
{
    int i;

    i = 0;
    while(str[i] && (i < len || len == -1))
    {
        if(str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 3)
    {
        i = 0;
        while(argv[1][i])
        {
            if ((!inter(argv[1], argv[1][i], i)) && inter(argv[2], argv[1][i], -1))
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
