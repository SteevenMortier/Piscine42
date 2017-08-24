/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 13:58:23 by smortier          #+#    #+#             */
/*   Updated: 2017/08/18 13:59:27 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*str;
	int		i;

	i = -1;
	str = argv[0];
	(void)argc;
	while (str[++i])
		ft_putchar(str[i]);
	ft_putchar('\n');
	return (0);
}
