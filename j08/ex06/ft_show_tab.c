/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 21:10:14 by smortier          #+#    #+#             */
/*   Updated: 2017/08/21 23:35:09 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putnbr(int nbr)
{
	unsigned	int		nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nb = -nbr;
	}
	else
		nb = nbr;
	if ((nb != 0))
	{
		while (nb > 9)
		{
			ft_putnbr(nb / 10);
			nb %= 10;
		}
	}
	ft_putchar(nb % 10 + 48);
}

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;
	int		y;

	y = 0;
	i = -1;
	while (par[++i].str != 0)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		y = -1;
		while (par[i].tab[++y] != 0)
		{
			ft_putstr(par[i].tab[y]);
			ft_putchar('\n');
		}
	}
}
