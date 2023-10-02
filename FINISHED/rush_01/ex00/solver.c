/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:31:38 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/23 21:10:16 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

void	trial_solver(int tab[4][4], int border[4][4], int size)
{
	int	index_border;
	int	index_size;
	int	temp_indice;

	index_border = 0;
	while (index_border < 4)
	{
		index_size = 0;
		while (index_size < size)
		{
			temp_indice = border[index_border][index_size];
			if (index_border == 1 || index_border == 3)
				temp_indice *= -1;
			if (index_border < 2)
				fill_line(tab, index_size, temp_indice, size);
			else
				fill_column(tab, index_size, temp_indice, size);
			index_size++;
		}
		index_border++;
	}
}

void	combo_trial_solver(int tab[4][4], int border[4][4], int size)
{
	int	i;
	int	temp_indices[2];

	i = 0;
	while (i < size)
	{
		temp_indices[0] = border[2][i];
		temp_indices[1] = border[3][i];
		combo_fill_line(tab, i, temp_indices, size);
		i++;
	}
	i = 0;
	while (i < size)
	{
		temp_indices[0] = border[0][i];
		temp_indices[1] = border[1][i];
		combo_fill_column(tab, i, temp_indices, size);
		i++;
	}
}

void	master_solver(int tab[4][4], int border[4][4], int size)
{
	trial_solver(tab, border, size);
	combo_trial_solver(tab, border, size);
	master_auto_completer(tab, size);
}
