/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 10:18:01 by smortier          #+#    #+#             */
/*   Updated: 2017/08/04 14:06:32 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	ft_putnbr(int nb)
{
	int		nbchar;
	int		power;
	int		printable;
	int		stayable;

	ft_putchar('"');
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
	ft_putchar('"');
}
