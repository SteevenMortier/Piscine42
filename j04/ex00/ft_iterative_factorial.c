/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 11:02:02 by smortier          #+#    #+#             */
/*   Updated: 2017/08/13 15:55:25 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		res;

	res = 1;
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	if (nb >= 13)
		return (0);
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
