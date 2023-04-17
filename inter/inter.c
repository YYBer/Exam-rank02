/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:41:48 by yli               #+#    #+#             */
/*   Updated: 2023/03/31 17:41:50 by yli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	inter(char *str, char c, int size)
{
	int	i;

	i = 0;
	while(str[i] && (i < size || size == -1))
	{
		//printf("in inter loop: %d ", i);
		//printf("str[i]: %c ", str[i]);
		//printf("size: %d ", size);
		//printf("c: %c\n", c);
		if (str[i++] == c)
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 3)
	{
		i = 0;
		while(argv[1][i])
		{
			//printf("start main loop\n");
			//if (inter(argv[1], argv[1][i], i) == 0)
			if (!inter(argv[1], argv[1][i], i)&&inter(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
