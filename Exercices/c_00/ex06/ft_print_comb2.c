/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fverge <fverge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:05:02 by fverge            #+#    #+#             */
/*   Updated: 2023/06/18 11:44:13 by fverge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(char n1, char n2, char n3, char n4)
{
	while (n4 <= '9')
	{
		if (((n1 * 10) + n2) < ((n3 * 10) + n4))
		{
			ft_putchar(n1);
			ft_putchar(n2);
			ft_putchar(' ');
			ft_putchar(n3);
			ft_putchar(n4);
			if (!(n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9'))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		n4++;
	}
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = '0';
	while (n1 <= '9')
	{
		n2 = '0';
		while (n2 <= '9')
		{
			n3 = '0';
			while (n3 <= '9')
			{
				n4 = '0';
				display(n1, n2, n3, n4);
				n3++;
			}
		n2++;
		}
	n1++;
	}
}
