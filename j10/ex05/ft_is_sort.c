/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:24:59 by smortier          #+#    #+#             */
/*   Updated: 2017/08/22 17:01:59 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int		i;
	int		crois;
	int		decr;

	i = -1;
	crois = 1;
	decr = 1;
	while (++i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0 && tab[i + 1])
			crois = 0;
		if (f(tab[i], tab[i + 1]) < 0 && tab[i + 1])
			decr = 0;
	}
	if (crois || decr)
		return (1);
	return (0);
}
