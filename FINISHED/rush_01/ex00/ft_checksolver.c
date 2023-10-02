/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksolver.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:37:21 by rmesa             #+#    #+#             */
/*   Updated: 2023/07/23 21:05:50 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

int	ft_checksolver_l(int check[4][4])
{
	int	x;
	int	y;
	int	temp;

	x = 0;
	y = 0;
	temp = 1;
	while ((x < 4) || (y < 4))
	{
		temp *= check[x][y];
		if (x == 3)
		{
			if (temp == 24)
			{
				x = 0;
				temp = 0;
				y++;
			}
			else
				return (0);
		}
		x++;
	}
	return (1);
}

int	ft_checksolver_c(int check[4][4])
{
	int	x;
	int	y;
	int	temp;

	x = 0;
	y = 0;
	temp = 1;
	while ((x < 4) || (y < 4))
	{
		temp *= check[x][y];
		if (y == 3)
		{
			if (temp == 24)
			{
				y = 0;
				temp = 0;
				x++;
			}
			else
				return (0);
		}
		y++;
	}
	return (1);
}

int	ft_checksolver(int solved[4][4])
{
	int	control;

	control = ft_checksolver_l(solved) + ft_checksolver_c(solved);
	if (control == 2)
		return (1);
	else
		return (0);
}
