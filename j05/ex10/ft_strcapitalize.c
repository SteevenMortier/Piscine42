/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 23:05:56 by smortier          #+#    #+#             */
/*   Updated: 2017/08/11 11:22:15 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
			(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (ft_isalnum(str[i]))
		{
			if ((i > 0) && ft_isalnum(str[i - 1]))
				str[i] += ((str[i] >= 'A' && str[i] <= 'Z')) ? 32 : 0;
			else
				str[i] -= ((str[i] >= 'a' && str[i] <= 'z')) ? 32 : 0;
		}
	return (str);
}
