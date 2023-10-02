/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:56:38 by flverge           #+#    #+#             */
/*   Updated: 2023/07/18 17:23:15 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index_src;
	int	index_dest;

	index_src = 0;
	index_dest = ft_strlen(dest);
	while (src[index_src] != '\0')
	{
		dest[index_dest] = src[index_src];
		index_src++;
		index_dest++;
	}
	dest[index_dest] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char src1[] = " bande de coquines";
	char ft_dest1[50] = "Salut";
	char dest1[50] = "Salut";

	printf("Valeur de src :\n%s\n\n", src1);

	printf("\n//////////////////////////\n");
	printf("\n//		Execution fonction\n");
	printf("\n//////////////////////////\n\n");

	///////////////////////////////
	// APPEL FONCTIONS
	//////////////////////////////
	ft_strcat(ft_dest1, src1);
	strcat(dest1, src1);
	/////////////////////////////

	printf("Resultat de ma fonction ft_strcat = \n%s\n", ft_dest1);
	printf("Resultat de la fonction strcat = \n%s\n", dest1);
	printf("\n--------------------------\n");
}
*/
