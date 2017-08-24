/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 16:17:11 by smortier          #+#    #+#             */
/*   Updated: 2017/08/23 17:44:34 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>
#include <stdlib.h>

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *start;
	t_list *elem;

	if(*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return;
	}
	start = *begin_list;
	elem = ft_create_elem(data);
	while (start->next)
		start = start->next;
	start->next = elem;
}

t_list *ft_list_push_params(int ac, char **av)
{
	t_list		*begin_list=0;

	while(ac)
	{
		ft_list_push_back(&begin_list, (void *)av[ac - 1]);
		ac -= 1;
	}
	return (begin_list);
}
