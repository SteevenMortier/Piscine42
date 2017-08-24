/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:05:53 by smortier          #+#    #+#             */
/*   Updated: 2017/08/16 20:50:17 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int		i;
	unsigned	int		y;

	y = 0;
	i = 0;
	while (i < n)
	{
		if (src[y] != '\0')
		{
			dest[i] = src[y];
			y++;
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
