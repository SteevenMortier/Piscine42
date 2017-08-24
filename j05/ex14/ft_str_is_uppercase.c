/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:46:14 by smortier          #+#    #+#             */
/*   Updated: 2017/08/11 09:49:29 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (!ft_is_uppercase(str[i]))
			return (0);
	return (1);
}
