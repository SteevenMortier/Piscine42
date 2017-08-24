/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 19:49:37 by smortier          #+#    #+#             */
/*   Updated: 2017/08/24 12:59:57 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void ft_list_reverse(t_list **begin_list)
{
	t_list		*tmp;
	t_list		*tmp2;
	t_list		*list;

	list = *begin_list;
	tmp = list->next;
	tmp2 = list->next;
	while(tmp2)
	{
		tmp2 = tmp2->next;
		tmp->next = list;
		list = tmp2;
	}
}
