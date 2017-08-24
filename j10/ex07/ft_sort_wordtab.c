/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 18:27:20 by smortier          #+#    #+#             */
/*   Updated: 2017/08/21 17:27:43 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return ((s1[i] < s2[i]) ? 0 : 1);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*stock;

	i = -1;
	while (tab[++i] != 0)
	{
		if (tab[i + 1])
		{
			if (ft_strcmp(tab[i], tab[i + 1]))
			{
				stock = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = stock;
				i = -1;
			}
		}
	}
}
