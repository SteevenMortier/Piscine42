/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:40:11 by smortier          #+#    #+#             */
/*   Updated: 2017/08/11 09:45:52 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (!ft_is_lowercase(str[i]))
			return (0);
	return (1);
}
