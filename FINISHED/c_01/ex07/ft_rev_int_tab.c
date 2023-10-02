/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:47:26 by flverge           #+#    #+#             */
/*   Updated: 2023/07/15 18:40:33 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		ft_swap(&tab[start], &tab[end]);
		start++;
		end--;
	}
}
/* #include <stdio.h>

int	main(void)
{
	int tab[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int size = sizeof(tab) / 4;


	printf("Valeurs du tableau de int avant fonction :\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d / ", tab[i]);
	}

	///////////////////////
	// 		EXECUTION FONCTION
	ft_rev_int_tab(tab, size);
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
