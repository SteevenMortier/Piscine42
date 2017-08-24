/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:43:48 by smortier          #+#    #+#             */
/*   Updated: 2017/08/23 15:17:19 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *start;
	t_list *elem;

	start = *begin_list;
	elem = ft_create_elem(data);
	if (!start)
		return;
	while (start->next)
		start = start->next;
	start->next = elem;
}
