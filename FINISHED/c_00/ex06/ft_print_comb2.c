/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:32:44 by flverge           #+#    #+#             */
/*   Updated: 2023/07/12 17:36:28 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(char n1_1, char n1_2, char n2_1, char n2_2)
{
	while (n2_2 <= '9')
	{
		if (((n1_1 * 10) + n1_2) < ((n2_1 * 10) + n2_2))
		{
			ft_putchar(n1_1);
			ft_putchar(n1_2);
			ft_putchar(' ');
			ft_putchar(n2_1);
			ft_putchar(n2_2);
			if (!(n1_1 == '9' && n1_2 == '8' && n2_1 == '9' && n2_2 == '9'))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		n2_2++;
	}
}

void	ft_print_comb2(void)
{
	char	n1_1;
	char	n1_2;
	char	n2_1;
	char	n2_2;

	n1_1 = '0';
	while (n1_1 <= '9')
	{
		n1_2 = '0';
		while (n1_2 <= '9')
		{
			n2_1 = '0';
			while (n2_1 <= '9')
			{
				n2_2 = '0';
				display(n1_1, n1_2, n2_1, n2_2);
				n2_1++;
			}
			n1_2++;
		}
		n1_1++;
	}
}
