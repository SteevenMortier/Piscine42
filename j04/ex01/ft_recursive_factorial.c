/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 11:01:10 by smortier          #+#    #+#             */
/*   Updated: 2017/08/07 11:01:26 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if ((nb == 0) || (nb == 1))
		return (1);
	if (nb < 0)
		return (0);
	if (nb != 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
