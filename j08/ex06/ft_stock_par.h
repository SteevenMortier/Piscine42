/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 18:41:21 by smortier          #+#    #+#             */
/*   Updated: 2017/08/21 23:30:21 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H

# define FT_STOCK_PAR_H

typedef struct			s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}						t_stock_par;

char					**ft_split_whitespaces(char *str);

void					ft_putchar(char c);

void					ft_show_tab(struct s_stock_par *par);

struct s_stock_par		*ft_param_to_tab(int ac, char **av);

#endif
