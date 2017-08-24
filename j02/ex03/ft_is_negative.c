/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 12:43:10 by smortier          #+#    #+#             */
/*   Updated: 2017/08/03 14:42:19 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	int		compare;

	if (n < 0)
	{
		compare = 'N';
		ft_putchar(compare);
	}
	else
	{
		compare = 'P';
		ft_putchar(compare);
	}
}
