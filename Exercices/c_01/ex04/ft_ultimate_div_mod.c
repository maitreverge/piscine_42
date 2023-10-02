/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:31:06 by flverge           #+#    #+#             */
/*   Updated: 2023/07/15 18:38:46 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int	main(void)
{
	int a  = 13;
	int b  = 3;

	printf("\nValeur de a avant fonction = %i\n", a);
	printf("Valeur de b avant fonction = %i\n", b);


	//////////////////////////////////
	//           APPEL FONCTION DIV MOD
	ft_ultimate_div_mod(&a, &b);
	///////////////////////////////////
	printf("/////////////////////\n\n");
	printf("EXECUTION FONCTION\n\n");
	printf("/////////////////////\n\n");

	printf("Valeur de a apres fonction = %i\n", a);
	printf("Valeur de b apres fonction = %i\n", b);
}
*/
