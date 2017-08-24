/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 19:04:55 by smortier          #+#    #+#             */
/*   Updated: 2017/08/23 19:49:06 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>
#include <stdlib.h>
#include <stdio.h>
t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list		*start;
	unsigned int i;

	i = 1;
	start = begin_list;
	while(i < nbr)
	{
		if (start)
		{
			printf("test : %s\n", start->data);
			i++;
			start = start->next;
		}
		else
		{
			printf("ON ENTRE");
			return (start = NULL);
		}
	}
	return(start);
}
