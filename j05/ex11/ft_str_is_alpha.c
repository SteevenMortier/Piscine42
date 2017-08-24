/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:09:35 by smortier          #+#    #+#             */
/*   Updated: 2017/08/16 15:09:37 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (!ft_isalnum(str[i]))
			return (0);
	}
	return (1);
}
