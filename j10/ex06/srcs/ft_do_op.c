/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 20:17:26 by smortier          #+#    #+#             */
/*   Updated: 2017/08/20 11:49:02 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_op.h>
#include <ft_opp.h>

int		ft_do_op(int a, char *op, int b)
{
	int		i;

	i = -1;
	while (++i < 5)
	{
		if (ft_strcmp(g_opptab[i].str, op) == 0)
		{
			g_opptab[i].f(a, b);
			ft_putchar('\n');
			return (0);
		}
	}
	g_opptab[5].f(a, b);
	ft_putchar('\n');
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		return (0);
	}
	ft_do_op(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3]));
	return (0);
}
