/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 18:44:06 by smortier          #+#    #+#             */
/*   Updated: 2017/08/18 11:04:43 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

struct s_stock_par		init(char *av)
{
	int						i;
	int						size;
	struct s_stock_par		structure;

	size = 0;
	i = -1;
	while (av[++i])
		size++;
	structure.size_param = size;
	structure.str = av;
	structure.copy = (char *)malloc((sizeof(char) * (size + 1)));
	i = -1;
	while (av[++i])
		structure.copy[i] = av[i];
	structure.copy[i] = '\0';
	structure.tab = ft_split_whitespaces(av);
	return (structure);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par		*structure;
	int						i;

	i = -1;
	structure = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	while (++i < ac)
	{
		structure[i] = init(av[i]);
	}
	structure[i].str = 0;
	return (structure);
}
