/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:19:03 by smortier          #+#    #+#             */
/*   Updated: 2017/08/11 11:22:57 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (!ft_is_num(str[i]))
			return (0);
	return (1);
}
