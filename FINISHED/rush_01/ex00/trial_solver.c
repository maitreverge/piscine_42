/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trial_solver.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 10:15:56 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/23 21:44:44 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_inverted(int *indice)
{
	if (*indice < 0)
	{
		*indice = *indice * -1;
		return (1);
	}
	return (0);
}

void	fill_column(int tab[4][4], int tab_index, int indice, int size)
{
	int	i;
	int	inverted;

	i = 0;
	inverted = is_inverted(&indice);
	if (indice == 4)
	{
		i = 0;
		while (i < size)
		{
			if (inverted)
				tab[i][tab_index] = size - i - 1;
			else
				tab[i][tab_index] = i + 1;
			i++;
		}
	}
	else if (indice == 1)
	{
		if (inverted)
			tab[size - 1][tab_index] = 4;
		else
			tab[0][tab_index] = 4;
	}
}

void	fill_line(int tab[4][4], int tab_index, int indice, int size)
{
	int	i;
	int	inverted;

	i = 0;
	inverted = is_inverted(&indice);
	if (indice == 4)
	{
		i = 0;
		while (i < size)
		{
			if (inverted)
				tab[tab_index][i] = size - i - 1;
			else
				tab[tab_index][i] = i + 1;
			i++;
		}
	}
	else if (indice == 1)
	{
		if (inverted)
			tab[tab_index][size - 1] = 4;
		else
			tab[tab_index][0] = 4;
	}
}

void	combo_fill_column(int tab[4][4], int tab_index, int *indice, int size)
{
	int	indice1;
	int	indice2;
	int	inverted;

	indice1 = indice[0];
	indice2 = indice[1];
	inverted = 0;
	if (indice1 > indice2)
	{
		indice1 = indice2;
		indice2 = indice[0];
		inverted = 1;
	}
	if (indice1 == 2)
	{
		if (indice2 == 3)
		{
			if (inverted)
				tab[size - 2][tab_index] = 4;
			else
				tab[1][tab_index] = 4;
		}
	}
}

void	combo_fill_line(int tab[4][4], int tab_index, int *indice, int size)
{
	int	indice1;
	int	indice2;
	int	inverted;

	indice1 = indice[0];
	indice2 = indice[1];
	inverted = 0;
	if (indice1 > indice2)
	{
		indice1 = indice2;
		indice2 = indice[0];
		inverted = 1;
	}
	if (indice1 == 2)
	{
		if (indice2 == 3)
		{
			if (inverted)
				tab[tab_index][size - 2] = 4;
			else
				tab[tab_index][1] = 4;
		}
	}
}
