/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auto_completer_solver.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:58:46 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/23 23:20:33 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

void	try_fill_case(int tab[4][4], int x, int y, int size)
{
	if (tab[y][x] != 0)
		return ;
	else
		tab[y][x] = look_at_line(tab, y, size);
	if (tab[y][x] != 0)
		return ;
	else
		tab[y][x] = look_at_column(tab, x, size);
}

void	auto_completer(int tab[4][4], int size)
{
	int	x;
	int	y;
	int	current_total;
	int	total_size;

	x = 0;
	y = 0;
	current_total = 0;
	total_size = size * size;
	while (current_total < total_size)
	{
		x = 0;
		while (x < size)
		{
			try_fill_case(tab, x, y, size);
			x++;
			current_total++;
		}
		y++;
	}
}

void	master_auto_completer(int tab[4][4], int size)
{
	int	i;

	i = 0;
	while (!ft_checksolver(tab) && i <= size * size)
	{
		auto_completer(tab, size);
		i++;
	}
	if (i == size * size)
	{
		ft_print(tab);
		ft_putstr("Error 404 :/\n");
	}
	else
		ft_print(tab);
}
