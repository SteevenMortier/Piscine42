/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 16:11:03 by smortier          #+#    #+#             */
/*   Updated: 2017/08/23 16:15:54 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>

t_list *ft_list_last(t_list *begin_list)
{
	t_list		*start;
	start = begin_list;
	while (start->next)
		start = start->next;
	return(start);
}
