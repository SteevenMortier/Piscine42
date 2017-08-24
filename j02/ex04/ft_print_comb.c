/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 15:03:29 by smortier          #+#    #+#             */
/*   Updated: 2017/08/03 18:02:25 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	number3;
	char	number2;
	char	number1;

	number3 = '2';
	number2 = '1';
	number1 = '0';
	while (number1 <= '7')
	{
		number2 = number1 + 1;
		while (number2 <= '8')
		{
			number3 = number2 + 1;
			while (number3 <= '9')
			{
				ft_print_numbers(number1, number2, number3);
				number3++;
			}
			number2++;
		}
		number1++;
	}
}
