/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:24:47 by flverge           #+#    #+#             */
/*   Updated: 2023/07/16 12:37:08 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
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

int	main(void)
{

	char	src1[] = "Coucou bande de coquines"; // 24
	char	ft_dest1[50];
	char	dest1[50];
	unsigned int	len1 = 24;

	char	src2[] = "Coucou bande de coquines";
	char	ft_dest2[50];
	char	dest2[50];
	unsigned int	len2 = 6;

	char	src3[] = "Coucou bande de coquines";
	char	ft_dest3[50];
	char	dest3[50];
	unsigned int	len3 = 1;

	char	src4[] = "Co";
	char	ft_dest4[50];
	char	dest4[50];
	unsigned int	len4 = 6;

	char	src5[] = "Coucou bande de coquines";
	char	ft_dest5[50];
	char	dest5[50];
	unsigned int	len5 = 3;

	printf("Contennu de src : \n%s\n", src1);
	///////////////////////////
	// APPEL FONCTIONS ft_strncpy + la vraie strncpy
	///////////////////////////
	ft_strncpy(ft_dest1, src1, len1);
	ft_dest1[len1] = '\0';
	ft_strncpy(ft_dest2, src2, len2);
	ft_dest2[len2] = '\0';
	ft_strncpy(ft_dest3, src3, len3);
	ft_dest3[len3] = '\0';
	ft_strncpy(ft_dest4, src4, len4);
	ft_dest4[len4] = '\0';
	ft_strncpy(ft_dest5, src5, len5);
	ft_dest5[len5] = '\0';

	strncpy(dest1, src1, len1);
	dest1[len1] = '\0';
	strncpy(dest2, src2, len2);
	dest2[len2] = '\0';
	strncpy(dest3, src3, len3);
	dest3[len3] = '\0';
	strncpy(dest4, src4, len4);
	dest4[len4] = '\0';
	strncpy(dest5, src5, len5);
	dest5[len5] = '\0';
	//////////////////////////

	printf("\n/////////////////////\n");
	printf("/// EXECUTION FONCTION");
	printf("\n/////////////////////\n\n");

	printf("ft_strcpy SRC 1 : \n%s\n\n", ft_dest1);
	printf("Reelle fonction strcpy SRC 1 : \n%s\n", dest1);
	printf("\n-------------\n\n");
	printf("ft_strcpy SRC 2 : \n%s\n\n", ft_dest2);
	printf("Reelle fonction strcpy SRC 2 : \n%s\n", dest2);
	printf("\n-------------\n\n");
	printf("ft_strcpy SRC 3 : \n%s\n\n", ft_dest3);
	printf("Reelle fonction strcpy SRC 3 : \n%s\n", dest3);
	printf("\n-------------\n\n");
	printf("ft_strcpy SRC 4 : \n%s\n\n", ft_dest4);
	printf("Reelle fonction strcpy SRC 4 : \n%s\n", dest4);
	printf("\n-------------\n\n");
	printf("ft_strcpy SRC 5 : \n%s\n\n", ft_dest5);
	printf("Reelle fonction strcpy SRC 5 : \n%s\n", dest5);
	printf("\n-------------\n");
}

*/
