/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:05:56 by flverge           #+#    #+#             */
/*   Updated: 2023/07/17 16:19:16 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1 = "Salut bande de coquines";
	char *s2 = "Salut bande de coquines";

	char *s3 = "Salut bande de coquines";
	char *s4 = "SaluT bande de coquines";

	char *s5 = "SaluT bande de coquines";
	char *s6 = "Salut bande de coquines";

	char *s7 = "Salut bande de coquinesss";
	char *s8 = "Salut bande de coquines";

	char *s9 = "Salut bande de coquines";
	char *s10 = "Salut bande de coquiness";

	char *s11 = "salut bande de coquines";
	char *s12 = "Salut bande de coquines";

	char *s13 = "Salut bande de coquines";
	char *s14 = "salut bande de coquines";

	printf("Resultat de ma fonction ft_strcmp = %i\n", ft_strcmp(s1, s2));
	printf("Resultat de la fonction strcmp = %i\n\n", strcmp(s1, s2));

	printf("Resultat de ma fonction ft_strcmp = %i\n", ft_strcmp(s3, s4));
	printf("Resultat de la fonction strcmp = %i\n\n", strcmp(s3, s4));

	printf("Resultat de ma fonction ft_strcmp = %i\n", ft_strcmp(s5, s6));
	printf("Resultat de la fonction strcmp = %i\n\n", strcmp(s5, s6));

	printf("Resultat de ma fonction ft_strcmp = %i\n", ft_strcmp(s7, s8));
	printf("Resultat de la fonction strcmp = %i\n\n", strcmp(s7, s8));

	printf("Resultat de ma fonction ft_strcmp = %i\n", ft_strcmp(s9, s10));
	printf("Resultat de la fonction strcmp = %i\n\n", strcmp(s9, s10));

	printf("Resultat de ma fonction ft_strcmp = %i\n", ft_strcmp(s11, s12));
	printf("Resultat de la fonction strcmp = %i\n\n", strcmp(s11, s12));

	printf("Resultat de ma fonction ft_strcmp = %i\n", ft_strcmp(s13, s14));
	printf("Resultat de la fonction strcmp = %i\n\n", strcmp(s13, s14));
}
*/
