/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:40:37 by flverge           #+#    #+#             */
/*   Updated: 2023/07/16 16:50:00 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lower(str[i]) == 1)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str1[] = "ceCi ESt unE phRASe RanDom";
	char str2[] = "CECI EST UNE PHRASE RANDOM";
	char str3[] = "ceci est une phrase random";


	printf("Test 1 avant fonction : \n%s\n\n", str1);
	printf("Test 2 avant fonction : \n%s\n\n", str2);
	printf("Test 3 avant fonction : \n%s\n\n", str3);

	///////////////////////////
	// APPEL FONCTIONS DANS LES PRINTF
	///////////////////////////
	char *result1 = ft_strupcase(str1);
	char *result2 = ft_strupcase(str2);
	char *result3 = ft_strupcase(str3);
	//////////////////////////
	printf("\n/////////////////////\n");
	printf("/// EXECUTION FONCTION");
	printf("\n/////////////////////\n\n");

	printf("Test 1 apres fonction : \n%s\n\n", result1);
	printf("Test 2 apres fonction : \n%s\n\n", result2);
	printf("Test 3 apres fonction : \n%s\n\n", result3);

	printf("\n-------------\n");
}
*/
