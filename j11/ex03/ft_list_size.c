/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 15:30:08 by smortier          #+#    #+#             */
/*   Updated: 2017/08/23 16:10:32 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>

int ft_list_size(t_list *begin_list)
{
	t_list		*start;
	int			i;

	i = 0;
	start = begin_list;
	while(start)
	{
		i++;
		start = start->next;
	}
	return (i);
}
