/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 10:18:01 by smortier          #+#    #+#             */
/*   Updated: 2017/08/19 23:57:13 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_op.h>

int		ft_power(int a)
{
	int		result;

	result = 1;
	while (a > 0)
	{
		result = 10 * result;
		a--;
	}
	return (result);
}

int		how_many_char(int a)
{
	int		compteur;
	int		fullpart;

	fullpart = a;
	compteur = 0;
	while (fullpart > 9)
	{
		fullpart = fullpart / 10;
		compteur++;
	}
	compteur++;
	return (compteur);
}

void	print_in_int(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	int		nbchar;
	int		power;
	int		printable;
	int		stayable;

	if (nb != -2147483648)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		stayable = nb;
		nbchar = how_many_char(nb);
		power = nbchar - 1;
		while (power >= 0)
		{
			printable = stayable / ft_power(power);
			stayable = stayable % ft_power(power);
			power--;
			ft_putchar(printable + 48);
		}
	}
	else
		print_in_int();
}
