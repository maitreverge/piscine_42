/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:40:37 by flverge           #+#    #+#             */
/*   Updated: 2023/07/16 13:20:15 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lower(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str1 = "dxfgchvjbnkm";
	char *str2 = "hngbfvdcsA";
	char *str3 = "456789h4567890";
	char *str4 = "\trsdfghjkljhg))))fdxcvb";
	char *str5 = "r45678976543456789";
	char *str6 = "45678765456787654567a";
	char *str7 = "234567899876544567";


	printf("\n/////////////////////\n");
	printf("/// EXECUTION FONCTION DANS LES PRINTF");
	printf("\n/////////////////////\n\n");
	printf("Expected result TEST 1 = 1
	\nFunction Result        = %i\n\n", ft_str_is_lowercase(str1));
	printf("Expected result TEST 2 = 0
	\nFunction Result        = %i\n\n", ft_str_is_lowercase(str2));
	printf("Expected result TEST 3 = 0
	\nFunction Result        = %i\n\n", ft_str_is_lowercase(str3));
	printf("Expected result TEST 4 = 0
	\nFunction Result        = %i\n\n", ft_str_is_lowercase(str4));
	printf("Expected result TEST 5 = 0
	\nFunction Result        = %i\n\n", ft_str_is_lowercase(str5));
	printf("Expected result TEST 6 = 0
	\nFunction Result        = %i\n\n", ft_str_is_lowercase(str6));
	printf("Expected result TEST 7 = 0
	\nFunction Result        = %i\n\n", ft_str_is_lowercase(str7));


	printf("\n-------------\n");
}
*/
