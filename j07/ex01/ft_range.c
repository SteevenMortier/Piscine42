/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 20:38:37 by smortier          #+#    #+#             */
/*   Updated: 2017/08/20 21:49:23 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
