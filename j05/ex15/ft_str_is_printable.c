/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:49:59 by smortier          #+#    #+#             */
/*   Updated: 2017/08/11 10:22:18 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_printable(char c)
{
	if (c > 32 && c < 127)
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (!ft_is_printable(str[i]))
			return (0);
	return (1);
}
