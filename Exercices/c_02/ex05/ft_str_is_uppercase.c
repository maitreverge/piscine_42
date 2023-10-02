/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:40:37 by flverge           #+#    #+#             */
/*   Updated: 2023/07/16 14:36:34 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_upper(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str1 = "UYFGCVBHJUYTDFGH";
	char *str2 = "hngbfvdcsA";
	char *str3 = "456789h4567890";
	char *str4 = "\trsdfghjkljhg))))fdxcvb";
	char *str5 = "r45678976543456789";
	char *str6 = "RTDYFTGUHJK4567a";
	char *str7 = "YTFGCVHJUGHF6";


	printf("\n/////////////////////\n");
	printf("/// EXECUTION FONCTION DANS LES PRINTF");
	printf("\n/////////////////////\n\n");
	printf("Expected result TEST 1 = 1
	\nFunction Result        = %i\n\n", ft_str_is_uppercase(str1));
	printf("Expected result TEST 2 = 0
	\nFunction Result        = %i\n\n", ft_str_is_uppercase(str2));
	printf("Expected result TEST 3 = 0
	\nFunction Result        = %i\n\n", ft_str_is_uppercase(str3));
	printf("Expected result TEST 4 = 0
	\nFunction Result        = %i\n\n", ft_str_is_uppercase(str4));
	printf("Expected result TEST 5 = 0
	\nFunction Result        = %i\n\n", ft_str_is_uppercase(str5));
	printf("Expected result TEST 6 = 0
	\nFunction Result        = %i\n\n", ft_str_is_uppercase(str6));
	printf("Expected result TEST 7 = 0
	\nFunction Result        = %i\n\n", ft_str_is_uppercase(str7));


	printf("\n-------------\n");
}
*/
