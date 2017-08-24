/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 17:47:31 by smortier          #+#    #+#             */
/*   Updated: 2017/08/23 19:04:28 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>
#include <stdlib.h>

void ft_list_clear(t_list **begin_list)
{
	t_list		*tmp;
	t_list		*tmp1;

	tmp = *begin_list;
	tmp1 = tmp;
	while (tmp)
	{
		tmp = tmp->next;
		free(tmp1);
		tmp1 = tmp;
	}
	(*begin_list) = NULL;
}
