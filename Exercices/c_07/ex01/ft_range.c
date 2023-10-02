/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:03:28 by flverge           #+#    #+#             */
/*   Updated: 2023/07/27 11:43:27 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*master_tab;

	if (min >= max)
		return (0);
	i = 0;
	range = max - min;
	master_tab = (int *)malloc(sizeof(int) * range);
	if (!master_tab)
		return (0);
	while (i <= range - 1)
	{
		master_tab[i] = min;
		i++;
		min++;
	}
	return (master_tab);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max);

int	main(int argc, char **argv)
{
	char	*str = "Usage :     ./a.out     min       max";
	if (argc == 3)
	{
		int min = atoi(argv[1]);
		int max = atoi(argv[2]);
		int *result = ft_range(min, max);

		printf("Resultat = ");
		for (int i = 0; i < max - min; i++)
			printf("%i / ", result[i]);

		free(result);
	}
	else
		printf("%s\n", str);
}
*/
