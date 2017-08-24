/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 14:47:36 by smortier          #+#    #+#             */
/*   Updated: 2017/08/19 23:55:22 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		plusorless(char *str, int i)
{
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int		i;
	int		f;
	int		result;

	result = 0;
	f = 0;
	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	i = plusorless(str, i);
	f = i;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result = 10 * result + (str[i] - 48);
		i++;
	}
	if (str[f - 1] == '-')
		result = result * -1;
	return (result);
}
