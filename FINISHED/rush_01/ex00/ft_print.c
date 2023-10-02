/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 10:17:49 by rmesa             #+#    #+#             */
/*   Updated: 2023/07/23 20:13:02 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

void	ft_print(int tab[4][4])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while ((x < 4) && (y < 4))
	{
		if ((x == 3) && (y < 4))
		{
			if ((x == 3) && (y == 3))
			{
				ft_putnbr(tab[y][x]);
				ft_putchar('\n');
				return ;
			}
			ft_putnbr(tab[y][x]);
			ft_putchar('\n');
			y++;
			x = 0;
		}
		ft_putnbr(tab[y][x]);
		ft_putchar(' ');
		x++;
	}
	return ;
}
