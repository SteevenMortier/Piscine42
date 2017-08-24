/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:41:05 by smortier          #+#    #+#             */
/*   Updated: 2017/08/07 17:51:07 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (i < index)
	{
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		i++;
	}
	return (n);
}
