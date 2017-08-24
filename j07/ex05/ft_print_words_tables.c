/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 18:14:44 by smortier          #+#    #+#             */
/*   Updated: 2017/08/15 18:34:31 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str);

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		y;

	y = 0;
	i = 0;
	while (tab[i] != 0)
	{
		y = 0;
		while ((tab[i])[y])
		{
			ft_putchar((tab[i])[y]);
			y++;
		}
		ft_putchar('\n');
		i++;
	}
}
