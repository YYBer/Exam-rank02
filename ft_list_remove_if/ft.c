/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:02:07 by yli               #+#    #+#             */
/*   Updated: 2023/04/13 22:02:08 by yli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (!*begin_list || !begin_list)
		return ;
	t_list	*cur = *begin_list;
	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		if (cur->next == NULL)
			return ;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	cur = *begin_list;
	ft_list_remove_if(&cur->next, data_ref, cmp);
}



void	print_list(t_list **begin_list)
{
	t_list	*cur = *begin_list;

	while (cur)
	{
		printf("%s\n", (char *)cur->data);
		cur = cur->next;
	}
}

int	main()
{
	char	str1[] = "a";
	char	str2[] = "b";
	char	str3[] = "a";
	char	str4[] = "d";

	t_list	*aa = malloc(sizeof(t_list));
	aa->data = str1;
	t_list	*bb = malloc(sizeof(t_list));
	aa->next = bb;
	bb->data = str2;
	t_list	*cc = malloc(sizeof(t_list));
	bb->next = cc;
	cc->data = str3;
	t_list	*dd = malloc(sizeof(t_list));
	cc->next = dd;
	dd->data = str4;
	//dd->next = 0;

	t_list **begin_list = &aa;

	print_list(begin_list);
	printf("\n");
	ft_list_remove_if(begin_list, str1, ft_strcmp);
	print_list(begin_list);
}
