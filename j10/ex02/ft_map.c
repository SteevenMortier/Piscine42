/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 17:47:03 by smortier          #+#    #+#             */
/*   Updated: 2017/08/22 22:22:53 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int		i;
	int		*tabr;

	i = -1;
	tabr = (int *)malloc(sizeof(int) * lenght);
	while (++i < lenght)
	{
		tabr[i] = f(tab[i]);
	}
	return (tabr);
}
