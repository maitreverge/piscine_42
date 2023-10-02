/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 09:12:32 by flverge           #+#    #+#             */
/*   Updated: 2023/07/16 11:26:42 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "Coucou bande de coquines";
	char	dest[50];
	char	src2[] = "Coucou bande de coquines";
	char	dest2[50];

	printf("Contennu de src : \n%s\n", src);
	///////////////////////////
	// APPEL FONCTIONS
	///////////////////////////
	ft_strcpy(dest, src);
	strcpy(dest2, src2);
	//////////////////////////

	printf("\n/////////////////////\n");
	printf("/// EXECUTION FONCTION");
	printf("\n/////////////////////\n\n");

	printf("ft_strcpy : \n%s\n", dest);
	printf("Reelle fonction strcpy : \n%s\n", dest);
}
*/
