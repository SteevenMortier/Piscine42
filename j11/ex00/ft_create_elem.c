/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:13:00 by smortier          #+#    #+#             */
/*   Updated: 2017/08/23 14:39:14 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>
#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
	t_list		*elem;
	if(!(elem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return(elem);
}
