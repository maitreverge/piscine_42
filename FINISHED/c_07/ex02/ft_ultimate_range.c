/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:54:17 by flverge           #+#    #+#             */
/*   Updated: 2023/07/27 11:45:12 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	range_of_tab;
	int	*master_tab;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	range_of_tab = max - min;
	master_tab = (int *)malloc(sizeof(int) * range_of_tab);
	if (!master_tab)
		return (-1);
	i = 0;
	while (i <= range_of_tab - 1)
	{
		master_tab[i] = min;
		i++;
		min++;
	}
	*range = master_tab;
	return (range_of_tab);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char **argv)
{
	char	*str = "Usage :     ./a.out     min       max";
	if (argc == 3)
	{
		int result;
		int min = atoi(argv[1]);
		int max = atoi(argv[2]);
		int *range;
		int **turbo_pointeur = &range;

		//////
		result = ft_ultimate_range(turbo_pointeur, min, max);

		printf("\n\nContenu tableau apres fonction  = ");
		for (int i = 0; i < max - min; i++)
			printf("%i / ", range[i]);
		printf("\n\nResultat suppose = %i\nVrai resultat = %i", max - min, result);


		free(range);
	}
	else
		printf("%s\n", str);
}
*/
