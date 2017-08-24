/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 08:23:14 by smortier          #+#    #+#             */
/*   Updated: 2017/08/21 21:06:59 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tab = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}
