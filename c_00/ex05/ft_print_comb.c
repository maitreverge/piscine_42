/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fverge <fverge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:25:57 by fverge            #+#    #+#             */
/*   Updated: 2023/06/17 19:41:32 by fverge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(char n1, char n2, char n3)
{
	if (n1 < n2 && n2 < n3)
	{
		if (n1 != n2 && n2 != n3 && n1 != n3)
		{
			ft_putchar(n1);
			ft_putchar(n2);
			ft_putchar(n3);
			if (!(n1 == '7' && n2 == '8' && n3 == '9'))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	while (n1 <= '9')
	{
		n2 = '0';
		while (n2 <= '9')
		{
			n3 = '0';
			while (n3 <= '9')
			{
				display(n1, n2, n3);
				n3++;
			}
		n2++;
		}
	n1++;
	}
}
