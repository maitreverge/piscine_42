/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:05:56 by flverge           #+#    #+#             */
/*   Updated: 2023/07/17 16:32:35 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
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

int	ft_strncmp(char *s1, char *s2i, unsigned int n);

int	main(void)
{
	char *s1 = "Salut bande de coquines";
	char *s2 = "Salut bande de coquines";
	unsigned int i1 = sizeof(s1);

	char *s3 = "Salut bande de coquines";
	char *s4 = "SaluT bande de coquines";
	unsigned int i3 = 5;

	char *s5 = "SaluT bande de coquines";
	char *s6 = "Salut bande de coquines";
	unsigned int i5 = 4;

	char *s7 = "Salut bande de coquinesss"; //25
	char *s8 = "Salut bande de coquines";
	unsigned int i7 = 25;

	char *s9 = "Salut bande de coquines";
	char *s10 = "Salut bande de coquiness";
	unsigned int i9 = 23;

	char *s11 = "salut bande de coquines";
	char *s12 = "Salut bande de coquines";
	unsigned int i11 = 0;

	char *s13 = "Salut bande de coquines";
	char *s14 = "salut bande de coquines";
	unsigned int i13 = 1;

	printf("Resultat de ma fonction ft_strncmp = %i\n", ft_strncmp(s1, s2, i1));
	printf("Resultat de la fonction strncmp = %i\n\n", strncmp(s1, s2, i1));

	printf("Resultat de ma fonction ft_strncmp = %i\n", ft_strncmp(s3, s4, i3));
	printf("Resultat de la fonction strncmp = %i\n\n", strncmp(s3, s4, i3));

	printf("Resultat de ma fonction ft_strncmp = %i\n", ft_strncmp(s5, s6, i5));
	printf("Resultat de la fonction strncmp = %i\n\n", strncmp(s5, s6, i5));

	printf("Resultat de ma fonction ft_strncmp = %i\n", ft_strncmp(s7, s8, i7));
	printf("Resultat de la fonction strncmp = %i\n\n", strncmp(s7, s8, i7));

	printf("Resultat de ma fonction ft_strncmp = %i\n", ft_strncmp(s9, s10, i9));
	printf("Resultat de la fonction strncmp = %i\n\n", strncmp(s9, s10, i9));

	printf("Resultat de ma fonction ft_strncmp = %i\n", ft_strncmp(s11, s12, i11));
	printf("Resultat de la fonction strncmp = %i\n\n", strncmp(s11, s12, i11));

	printf("Resultat de ma fonction ft_strncmp = %i\n", ft_strncmp(s13, s14, i13));
	printf("Resultat de la fonction strncmp = %i\n\n", strncmp(s13, s14, i13));
}
*/
