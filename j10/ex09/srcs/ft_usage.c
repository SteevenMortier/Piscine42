/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 20:09:07 by smortier          #+#    #+#             */
/*   Updated: 2017/08/19 23:55:55 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_op.h>

int		ft_usage(int a, int b)
{
	int i;

	i = -1;
	a = b;
	ft_putstr("error : only [ + - * / % ] are accepted.");
	return (0);
}