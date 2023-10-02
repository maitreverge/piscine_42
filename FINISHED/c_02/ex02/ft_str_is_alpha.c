/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:40:37 by flverge           #+#    #+#             */
/*   Updated: 2023/07/16 13:01:33 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str1 = "dxfgchvjbnkm";
	char *str2 = "TRFCYGVHBJKNLM";
	char *str3 = "rsdTDRFYGHJfdxcvb";
	char *str4 = "\trsdfghjkljhg))))fdxcvb";
	char *str5 = "rsdfghjkljhgfdxcvb9";
	char *str6 = "yhgjkjhgfdgchjhg\ntfgvhjbkhgfc";
	char *str7 = "retfyguhbTDFYGUHBJ5CFTYGVHB";

	printf("\n/////////////////////\n");
	printf("/// EXECUTION FONCTION DANS LES PRINTF");
	printf("\n/////////////////////\n\n");
	printf("Expected result TEST 1 =
	1\nFunction Result        = %i\n\n", ft_str_is_alpha(str1));
	printf("Expected result TEST 2 =
	1\nFunction Result        = %i\n\n", ft_str_is_alpha(str2));
	printf("Expected result TEST 3 =
	1\nFunction Result        = %i\n\n", ft_str_is_alpha(str3));
	printf("Expected result TEST 4 =
	0\nFunction Result        = %i\n\n", ft_str_is_alpha(str4));
	printf("Expected result TEST 5 =
	0\nFunction Result        = %i\n\n", ft_str_is_alpha(str5));
	printf("Expected result TEST 6 =
	0\nFunction Result        = %i\n\n", ft_str_is_alpha(str6));
	printf("Expected result TEST 7 =
	0\nFunction Result        = %i\n\n", ft_str_is_alpha(str7));


	printf("\n-------------\n");
}

*/
