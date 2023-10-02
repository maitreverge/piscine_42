/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:16:37 by flverge           #+#    #+#             */
/*   Updated: 2023/07/16 13:39:20 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y);

int	main(void)
{
	printf("Rush 0, 0\n");
	rush(0, 0);
	printf("\n");

	printf("Rush 123, 0\n");
	rush(123, 0);
	printf("\n");
	
	printf("Rush 0, 123\n");
	rush(0, 123);
	printf("\n");
	
	printf("Rush -1, -2\n");
	rush(-1, -2);
	printf("\n");
	
	printf("Rush 5, 2\n");
	rush(5, 2);
	printf("\n");
	
	printf("Rush 5, 1\n");
	rush(5, 1);
	printf("\n");
	
	printf("Rush 1, 1\n");
	rush(1, 1);
	printf("\n");
	
	printf("Rush 1, 5\n");
	rush(1, 5);
	printf("\n");
	
	printf("Rush 4, 4\n");
	rush(4, 4);
	printf("\n");
	
	printf("Rush 6, 6\n");
	rush(6, 6);
	printf("\n");

	return (0);
}
