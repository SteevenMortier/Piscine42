/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 20:59:15 by smortier          #+#    #+#             */
/*   Updated: 2017/08/13 09:10:51 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_queens(int tab[9], int queen, int pos)
{
	int		i;

	i = 0;
	while (i < pos)
	{
		if ((queen == tab[i]) || (queen - pos + i == tab[i]) ||
				(queen + pos - i == tab[i]))
			return (0);
		i++;
	}
	return (1);
}

void	place_queens(int tab[8], int pos, int *nb)
{
	int		i;

	i = 0;
	if (pos == 8)
		*nb += 1;
	else
		while (i < 8)
		{
			if (check_queens(tab, i + 1, pos))
			{
				tab[pos] = i + 1;
				place_queens(tab, pos + 1, nb);
			}
			i++;
		}
}

int		ft_eight_queens_puzzle(void)
{
	int tab[8];
	int nb;

	nb = 0;
	place_queens(tab, 0, &nb);
	return (nb);
}
