/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:26:20 by flverge           #+#    #+#             */
/*   Updated: 2023/07/20 09:30:00 by flverge          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char src1[] = "bande de coquines";
	char ft_dest1[50] = "Salut";
	char dest1[50] = "Salut";
	unsigned int len1 = 6;

	printf("Valeur de src :\n%s\n\n", src1);

	printf("\n//////////////////////////\n");
	printf("\n//		Execution fonction\n");
	printf("\n//////////////////////////\n\n");

	///////////////////////////////
	// APPEL FONCTIONS
	//////////////////////////////
	ft_strncat(ft_dest1, src1, len1);
	strncat(dest1, src1, len1);
	/////////////////////////////

	printf("Resultat de ma fonction ft_strcat = \n%s\n", ft_dest1);
	printf("Resultat de la fonction strcat = \n%s\n", dest1);
	printf("\n--------------------------\n");
}
