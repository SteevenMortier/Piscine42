/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 15:18:15 by smortier          #+#    #+#             */
/*   Updated: 2017/08/23 15:29:00 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*elem;

	elem = ft_create_elem(data);
	elem->next = *begin_list;
	*begin_list = elem;
}
