/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:56:59 by flverge           #+#    #+#             */
/*   Updated: 2023/07/20 08:55:12 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	is_alpha_num(char c)
{
	if ((is_lower(c) == 1) || (is_upper(c) == 1) || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

int	is_space(char c)
{
	if (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] != '\0' && is_lower(str[0]) == 1)
		str[0] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if (is_alpha_num(str[i - 1]) == 1 && is_upper(str[i]) == 1)
			str[i] = 32;
			// str[i] = str[i] + 32
		if (is_space(str[i - 1]) == 1 && is_lower(str[i]) == 1)
			str[i] -= 32;
		if ((str[i -1] == '+' || str[i - 1] == '-') && is_lower(str[i]) == 1)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "ceCi ESt unE phRASe RanDom";
	char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str3[] = "ceci est une phrase random";
	char str4[] = "+--+ceCci-eSt             uNEpPHRASe-rANdom";


	printf("Test 1 avant fonction : \n%s\n\n", str1);
	printf("Test 2 avant fonction : \n%s\n\n", str2);
	printf("Test 3 avant fonction : \n%s\n\n", str3);
	printf("Test 4 avant fonction : \n%s\n\n", str4);

	///////////////////////////
	// APPEL FONCTIONS DANS LES PRINTF
	///////////////////////////
	char *result1 = ft_strcapitalize(str1);
	char *result2 = ft_strcapitalize(str2);
	char *result3 = ft_strcapitalize(str3);
	char *result4 = ft_strcapitalize(str4);
	//////////////////////////
	printf("\n/////////////////////\n");
	printf("/// EXECUTION FONCTION");
	printf("\n/////////////////////\n\n");

	printf("Test 1 apres fonction : \n%s\n\n", result1);
	printf("Test 2 apres fonction : \n%s\n\n", result2);
	printf("Test 3 apres fonction : \n%s\n\n", result3);
	printf("Test 4 apres fonction : \n%s\n\n", result4);

	printf("\n-------------\n");
}
*/
