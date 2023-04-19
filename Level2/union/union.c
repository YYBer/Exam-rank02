/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 21:48:52 by yli               #+#    #+#             */
/*   Updated: 2023/04/10 21:48:53 by yli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_union(char *str, char c, int index)
{
	int	i;

	i = 0;
	while(i < index)
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

char *str_join(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(s1[i])
		i++;
	while(s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	return s1;
}

int	main(int argc, char **argv)
{
	char *str;
	int	i;

	if (argc == 3)
	{
		str = str_join(argv[1], argv[2]);
		i = 0;
		while(str[i])
		{
			if (!ft_union(str, str[i], i))
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
