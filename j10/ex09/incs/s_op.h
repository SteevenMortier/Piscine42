/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_op.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 21:09:10 by smortier          #+#    #+#             */
/*   Updated: 2017/08/22 10:50:43 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_OP_H
# define S_OP_H

# include <unistd.h>

int					ft_atoi(char *str);
int					ft_add(int a, int b);
int					ft_sub(int a, int b);
int					ft_mul(int a, int b);
int					ft_div(int a, int b);
int					ft_mod(int a, int b);
int					ft_usage(int a, int b);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
int					ft_strcmp(char *s1, char *s2);

typedef struct		s_opp
{
	char			*str;
	int				(*f)(int a, int b);
}					t_opp;

#endif
