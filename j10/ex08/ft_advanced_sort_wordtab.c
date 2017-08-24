/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 16:48:14 by smortier          #+#    #+#             */
/*   Updated: 2017/08/22 12:17:01 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*stock;

	i = -1;
	while (tab[++i] != 0)
	{
		if (tab[i + 1])
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				stock = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = stock;
				i = -1;
			}
		}
	}
}
