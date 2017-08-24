/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 09:23:41 by smortier          #+#    #+#             */
/*   Updated: 2017/08/18 10:12:36 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		how_many(int argc, char **argv)
{
	int		compteur;
	int		i;

	compteur = 0;
	while (argc > 0)
	{
		i = 0;
		while (argv[argc - 1][i] != '\0')
		{
			i++;
			compteur++;
		}
		argc--;
	}
	return (compteur);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*tab;
	int		i;
	int		compteur;
	int		y;
	int		f;

	y = 0;
	f = 0;
	compteur = how_many(argc, argv);
	tab = (char *)malloc(sizeof(char) * (compteur + argc));
	while (++f <= argc - 1)
	{
		i = 0;
		while (argv[f][i] != '\0')
		{
			tab[y] = argv[f][i];
			i++;
			y++;
		}
		tab[y] = (f != (argc - 1)) ? '\n' : '\0';
		y++;
	}
	return (tab);
}
