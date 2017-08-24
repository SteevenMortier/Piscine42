/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:13:39 by smortier          #+#    #+#             */
/*   Updated: 2017/08/11 09:13:16 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		y;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		y = 0;
		while (str[i + y] == to_find[y])
		{
			y++;
			if (to_find[y] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
