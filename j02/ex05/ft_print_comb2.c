/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 18:06:31 by smortier          #+#    #+#             */
/*   Updated: 2017/08/04 10:07:09 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(char a, char b, char c, char d)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(' ');
	ft_putchar(a);
	ft_putchar(b);
	if ((c == '9') && (d == '8') && (a == '9'))
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2_temp(char a, char b)
{
	char	number1;
	char	number2;
	int		sum1;
	int		sum2;

	number1 = '0';
	number2 = '1';
	while (number1 <= '9')
	{
		while (number2 <= '9')
		{
			sum1 = 10 * number1 + number2;
			sum2 = 10 * a + b;
			if (sum1 <= sum2)
			{
			}
			else
			{
				ft_print_numbers(number1, number2, a, b);
			}
			number2++;
		}
		number1++;
		number2 = '0';
	}
}

void	ft_print_comb2(void)
{
	char	number1;
	char	number2;

	number1 = '0';
	number2 = '0';
	while (number1 <= '9')
	{
		while (number2 <= '9')
		{
			ft_print_comb2_temp(number1, number2);
			number2++;
		}
		number1++;
		number2 = '0';
	}
}
