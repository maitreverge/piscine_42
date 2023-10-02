/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:03:20 by flverge           #+#    #+#             */
/*   Updated: 2023/07/15 18:36:52 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int a  = 21;
	int b  = 42;
	
	printf("\nValeur de a avant fonction = %i\n", a);
	printf("Valeur de b avant fonction = %i\n", b);
	
	
	//////////////////////////////////
	//           APPEL FONCTION DIV MOD
	ft_swap(&a, &b);
	///////////////////////////////////
	printf("/////////////////////\n\n");
	printf("EXECUTION FONCTION\n\n");
	printf("/////////////////////\n\n");

	printf("Valeur de a apres fonction = %i\n", a);
	printf("Valeur de b apres fonction = %i\n", b);
}

*/
