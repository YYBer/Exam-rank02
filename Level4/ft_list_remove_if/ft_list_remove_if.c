/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:18:07 by yli               #+#    #+#             */
/*   Updated: 2023/04/13 17:18:08 by yli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
/*
int 	cmp(char *s1, char *s2)
{
	int	result;
	int	i;

	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	result = (s1[i]  - s2[i]);
	return result;
}
*/
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp;

	if (*begin_list == 0 || begin_list == 0)
		return ;
	temp = *begin_list;
	if(*begin_list && cmp(temp->data, data_ref) == 0)
	{
		*begin_list = temp->next;
		if (temp->next == NULL)
			return ;
		free(temp);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	temp = *begin_list;
	ft_list_remove_if(&temp->next, data_ref, cmp);
}

#include <stdio.h>
int	main()
{
	char stra[] = "aa";
	char strb[] = "bb";
	char strc[] = "cc";
	char strd[] = "bb";
	

	t_list *aa = malloc(sizeof(t_list *));
	aa->data = stra;
	t_list *bb = malloc(sizeof(t_list *));
	bb->data = strb;
	aa->next = bb;
	t_list *cc = malloc(sizeof(t_list *));
	cc->data = strc;
	bb->next = cc;
	t_list *dd = malloc(sizeof(t_list *));
	dd->data = strd;
	cc->next = dd;
	dd->next = 0;
	ft_list_remove_if(&aa, "bb", cmp);
	printf("%s\n", (char *)aa->next->data);
}
