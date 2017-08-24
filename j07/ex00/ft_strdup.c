/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:58:29 by smortier          #+#    #+#             */
/*   Updated: 2017/08/19 14:43:19 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*tab;

	i = 0;
	while (src[i] != '\0')
		i++;
	tab = (char *)malloc(sizeof(char) * (i + 1));
	tab[i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		tab[i] = src[i];
		i++;
	}
	return (tab);
}
