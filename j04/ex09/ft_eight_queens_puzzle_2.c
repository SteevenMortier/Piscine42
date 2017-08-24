/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 09:27:58 by smortier          #+#    #+#             */
/*   Updated: 2017/08/13 09:29:09 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		check_queens(int tab[8], int queen, int pos)
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

void	place_queens(int tab[8], int pos)
{
	int		i;
	int		print;

	print = 0;
	i = 0;
	if (pos == 8)
	{
		while (print < 8)
		{
			ft_putchar(tab[print] + 48);
			print++;
		}
		ft_putchar('\n');
		print = 0;
	}
	else
		while (i < 8)
		{
			if (check_queens(tab, i + 1, pos))
			{
				tab[pos] = i + 1;
				place_queens(tab, pos + 1);
			}
			i++;
		}
}

void	ft_eight_queens_puzzle_2(void)
{
	int tab[8];

	place_queens(tab, 0);
}
