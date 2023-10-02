/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:40:37 by flverge           #+#    #+#             */
/*   Updated: 2023/07/16 15:24:54 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_non_print(char c)
{
	if ((c >= 0 && c <= 32) || (c == 127))
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_non_print(str[i]) == 1)
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
	char *str5 = "r45678976i\v543456789";
	char *str6 = "RTDYFTGUHJK4567a\0";
	char *str7 = "\x7FYTFGCVHJUGHF6";


	printf("\n/////////////////////\n");
	printf("/// EXECUTION FONCTION DANS LES PRINTF");
	printf("\n/////////////////////\n\n");
	printf("Expected result TEST 1 = 1
	\nFunction Result        = %i\n\n", ft_str_is_printable(str1));
	printf("Expected result TEST 2 = 1
	\nFunction Result        = %i\n\n", ft_str_is_printable(str2));
	printf("Expected result TEST 3 = 1
	\nFunction Result        = %i\n\n", ft_str_is_printable(str3));
	printf("Expected result TEST 4 = 0
	\nFunction Result        = %i\n\n", ft_str_is_printable(str4));
	printf("Expected result TEST 5 = 0
	\nFunction Result        = %i\n\n", ft_str_is_printable(str5));
	printf("Expected result TEST 6 = 1
	\nFunction Result        = %i\n\n", ft_str_is_printable(str6));
	printf("Expected result TEST 7 = 0
	\nFunction Result        = %i\n\n", ft_str_is_printable(str7));


	printf("\n-------------\n");
}
*/
