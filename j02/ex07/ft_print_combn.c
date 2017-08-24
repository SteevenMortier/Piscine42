/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 14:15:54 by smortier          #+#    #+#             */
/*   Updated: 2017/08/04 15:27:20 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char		ft_turn(void)
{
	char number1;

	number1 = '0';
	while (number1 <= '8')
	{
		number1++;
		ft_putchar(number1);
	}
	return (number1);
}

void	ft_print_combn(int n)
{
	char	number1;
	int		entered;

	entered = n;
	number1 = '1';
	while (entered > 0)
	{
		while (number1 <= '9')
		{
			number1=ft_turn();
			ft_putchar(number1);
		}
		entered = entered - 1;
	}
}
