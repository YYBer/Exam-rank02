/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:16:26 by user              #+#    #+#             */
/*   Updated: 2023/02/17 14:29:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {
            if (argv[1][i] >=65 && argv[1][i] <= 90)
            {
                argv[1][i] += 32;
                write(1, &argv[1][i], 1);
            }
            else if (argv[1][i] >= 97 && argv[1][i] <= 122)
            {
                argv[1][i] -=32;
                write(1, &argv[1][i], 1);
            }
            else write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}