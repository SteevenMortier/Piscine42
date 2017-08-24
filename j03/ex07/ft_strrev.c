/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 09:52:06 by smortier          #+#    #+#             */
/*   Updated: 2017/08/06 12:43:15 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_tab(int i, char *letter)
{
	char	tab[i];
	char	*a;

	i--;
	tab[i] = '\0';
	i--;
	while (*letter != '\0')
	{
		tab[i] = *letter;
		letter++;
		i--;
	}
	a = tab;
	return (a);
}

char	*ft_strrev(char *str)
{
	int		i;
	char	*tab;
	char	*letter;

	letter = str;
	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	i++;
	tab = ft_tab(i, letter);
	return (tab);
}
