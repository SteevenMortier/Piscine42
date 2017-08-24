/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 22:17:16 by smortier          #+#    #+#             */
/*   Updated: 2017/08/18 14:00:05 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		y;
	char	*str;

	y = argc;
	y -= 1;
	while (y >= 1)
	{
		i = -1;
		str = argv[y];
		while (str[++i])
			ft_putchar(str[i]);
		ft_putchar('\n');
		y--;
	}
	return (0);
}
