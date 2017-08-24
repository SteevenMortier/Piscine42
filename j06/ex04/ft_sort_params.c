/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:10:05 by smortier          #+#    #+#             */
/*   Updated: 2017/08/18 14:00:26 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		stpcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int argc, char **argv)
{
	int		len;
	int		i;
	int		cmp;
	char	*swp;

	i = 1;
	len = argc - 1;
	while (i < len)
	{
		cmp = stpcmp(argv[i], argv[i + 1]);
		if (cmp > 0)
		{
			swp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swp;
			i = 0;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		y;

	i = 1;
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		y = 0;
		while (argv[i][y])
		{
			ft_putchar(argv[i][y]);
			y++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
