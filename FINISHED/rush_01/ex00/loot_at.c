/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loot_at.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 23:11:52 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/23 23:20:21 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calculate_return(int proba_count, int *proba, int size)
{
	int	i;

	if (proba_count < 1)
	{
		i = 0;
		while (i < size)
		{
			if (proba[i] > 0)
				return (proba[i]);
			i++;
		}
		return (0);
	}
	else
		return (0);
}

int	look_at_line(int tab[4][4], int tab_index, int size)
{
	int	i;
	int	voisins[4];
	int	proba[4];
	int	voisins_count;
	int	proba_count;

	i = 0;
	voisins_count = 0;
	proba_count = 0;
	while (i < size)
	{
		voisins[tab[tab_index][i]]++;
		i++;
	}
	i = 0;
	while (i <= size)
	{
		if (voisins[i] < 1)
		{
			proba[i] = i;
			proba_count++;
		}
		i++;
	}
	return (calculate_return(proba_count, proba, size));
}

int	look_at_column(int tab[4][4], int tab_index, int size)
{
	int	i;
	int	voisins[4];
	int	proba[4];
	int	voisins_count;
	int	proba_count;

	i = 0;
	voisins_count = 0;
	proba_count = 0;
	while (i < size)
	{
		voisins[tab[i][tab_index]]++;
		i++;
	}
	i = 0;
	while (i <= size)
	{
		if (voisins[i] < 1)
		{
			proba[i] = i;
			proba_count++;
		}
		i++;
	}
	return (calculate_return(proba_count, proba, size));
}
