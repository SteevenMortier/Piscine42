/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 12:01:38 by smortier          #+#    #+#             */
/*   Updated: 2017/08/10 10:18:16 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int		result;

	result = 0;
	if ((power < 0) || (nb == 0))
	{
		if (power == 0 && nb == 0)
			return (1);
		return (0);
	}
	if (power == 0)
		return (1);
	if (power >= 1)
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}
