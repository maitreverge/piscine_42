/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 08:29:51 by flverge           #+#    #+#             */
/*   Updated: 2023/07/17 10:03:07 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char src1[] = "ceCi ESt unE phRASe RanDom";
	char buffer1[50];
	unsigned int len1 = sizeof(buffer1);

	char src2[] = "ceCi ESt unE phRASe RanDom";
	char buffer2[3];
	unsigned int len2 = sizeof(buffer2);

	char src3[] = "ceCi ESt unE phRASe RanDom";
	char buffer3[6];
	unsigned int len3 = sizeof(buffer3);

	char src4[] = "ceCi ESt unE phRASe RanDom";
	char buffer4[0];
	unsigned int len4 = sizeof(buffer4);

	char src5[] = "ceCi ESt unE phRASe RanDom";
	char buffer5[1];
	unsigned int len5 = sizeof(buffer5);
	printf("Test 1 avant fonction : \n%s\n\n", src1);
	printf("Test 2 avant fonction : \n%s\n\n", src2);
	printf("Test 3 avant fonction : \n%s\n\n", src3);
	printf("Test 4 avant fonction : \n%s\n\n", src4);
	printf("Test 5 avant fonction : \n%s\n\n", src5);

	///////////////////////////
	// APPEL FONCTIONS DANS LES PRINTF
	///////////////////////////
	// MY FT_STRLCPY
	unsigned int result1 = ft_strlcpy(buffer1, src1, len1);
	unsigned int result2 = ft_strlcpy(buffer2, src2, len2);
	unsigned int result3 = ft_strlcpy(buffer3, src3, len3);
	unsigned int result4 = ft_strlcpy(buffer4, src4, len4);
	unsigned int result5 = ft_strlcpy(buffer5, src5, len5);
	//////////////////////////
	printf("\n/////////////////////\n");
	printf("/// EXECUTION FONCTION");
	printf("\n/////////////////////\n\n");

	printf("My ft_strlcpy : \n%i\n\n", result1);
	printf("My ft_strlcpy : \n%i\n\n", result2);
	printf("My ft_strlcpy : \n%i\n\n", result3);
	printf("My ft_strlcpy : \n%i\n\n", result4);
	printf("My ft_strlcpy : \n%i\n\n", result5);

	printf("\n-------------\n");
}
*/
