/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 09:44:30 by smortier          #+#    #+#             */
/*   Updated: 2017/08/20 21:55:25 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		char_is_sep(char c, char *charset)
{
	int		i;

	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (1);
	return (0);
}

int		ft_count_words(char *str, char *charset)
{
	int		i;
	int		count_w;

	i = 0;
	count_w = 0;
	while (str[i])
	{
		while (!char_is_sep(str[i], charset) && str[i])
		{
			i++;
			if (char_is_sep(str[i], charset) || str[i] == '\0')
			{
				count_w++;
			}
		}
		if (char_is_sep(str[i], charset) && str[i])
			i++;
	}
	return (count_w);
}

void	malloc_all_tab(char **tab, char *str, char *charset)
{
	int		c_m;
	int		i;
	int		compteur_tab;

	compteur_tab = 0;
	i = 0;
	while (str[i])
	{
		c_m = 0;
		while (!char_is_sep(str[i], charset) && str[i])
		{
			c_m += 1;
			i++;
			if (char_is_sep(str[i], charset) || str[i] == '\0')
			{
				(tab[compteur_tab]) = (char *)malloc(sizeof(char) * c_m + 1);
				compteur_tab += 1;
			}
		}
		if (char_is_sep(str[i], charset))
			i++;
	}
}

void	fill_tab(int count_w, char *str, char *charset, char **tab)
{
	int		c_m;
	int		i;

	count_w = 0;
	i = 0;
	while (str[i])
	{
		c_m = 0;
		while (!char_is_sep(str[i], charset) && str[i])
		{
			(tab[count_w])[c_m] = str[i];
			c_m += 1;
			i++;
			if (str[i] == '\0' || char_is_sep(str[i], charset))
			{
				(tab[count_w])[c_m] = '\0';
				count_w += 1;
			}
		}
		if (char_is_sep(str[i], charset))
			i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		count_w;
	char	**tab;

	count_w = ft_count_words(str, charset);
	tab = (char **)malloc(sizeof(char *) * (count_w + 1));
	tab[count_w] = 0;
	malloc_all_tab(tab, str, charset);
	fill_tab(count_w, str, charset, tab);
	return (tab);
}
