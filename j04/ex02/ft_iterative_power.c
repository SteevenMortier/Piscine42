/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 11:13:26 by smortier          #+#    #+#             */
/*   Updated: 2017/08/10 10:17:48 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		res;

	res = 1;
	if ((nb == 0) || (power < 0))
	{
		if ((nb == 0) && (power == 0))
			return (1);
		return (0);
	}
	while (power >= 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
