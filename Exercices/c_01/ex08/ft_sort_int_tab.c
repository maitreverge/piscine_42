/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:12:34 by flverge           #+#    #+#             */
/*   Updated: 2023/07/15 18:41:12 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab [j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[] = {4242, 10, 0, 0, 4, 42, 4, 12, 2, 5, 7, 9, 8, 67, 0};
	int size = sizeof(tab) / 4;


	printf("Valeurs du tableau de int avant fonction :\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d / ", tab[i]);
	}

	///////////////////////
	// 		EXECUTION FONCTION
	ft_sort_int_tab(tab, size);
	//////////////////////

	printf("\n\n////////////////////////\n");
	printf("//////// EXECUTION FONCTION \n");
	printf("////////////////////////\n\n");
	printf("Valeurs du tableau de int :\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d / ", tab[i]);
	}
}
*/
