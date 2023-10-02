/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:05:06 by flverge           #+#    #+#             */
/*   Updated: 2023/07/27 11:42:34 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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

char	*ft_strdup(char *src)
{
	char	*result;
	int		len_src;

	len_src = ft_strlen(src);
	result = (char *) malloc(len_src + 1);
	if (!result)
		return (0);
	return (ft_strcpy(result, src));
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*src = "Salut bande de coquines"; // len = 23 with '\0'

	char	*ft_dest = ft_strdup(src);
	char	*dest = strdup(src);

	printf("My ft_strdup = %s\n----------\n", ft_dest);
	printf("Real strdup = %s\n----------\n", dest);

	free(ft_dest);
	free(dest);
}
*/
