/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:47:56 by flverge           #+#    #+#             */
/*   Updated: 2023/07/15 18:37:40 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int a  = 13;
	int b  = 3;

	int div = 0;
	int mod = 0;
	printf("\nValeur de a avant fonction = %i\n", a);
	printf("Valeur de b avant fonction = %i\n", b);
	printf("Valeur de div avant fonction = %i\n", div);
	printf("Valeur de mod avant fonction = %i\n\n", mod);


	//////////////////////////////////
	//           APPEL FONCTION DIV MOD
	ft_div_mod(a, b, &div, &mod);
	///////////////////////////////////
	printf("/////////////////////\n\n");
	printf("EXECUTION FONCTION\n\n");
	printf("/////////////////////\n\n");

	printf("Valeur de a apres fonction = %i\n", a);
	printf("Valeur de b apres fonction = %i\n", b);
	printf("Valeur de div apres fonction = %i\n", div);
	printf("Valeur de mod apres fonction = %i\n\n", mod);
}
*/
