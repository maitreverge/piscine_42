/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:53:25 by flverge           #+#    #+#             */
/*   Updated: 2023/08/02 10:05:01 by flverge          ###   ########.fr       */
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

void	ft_strcpy(int *j, char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[*j] = src[i];
		i++;
		*j = *j + 1;
	}
}

void	big_len(int i, int size, int *total_len, char **strs)
{
	while (i < size)
	{
		*total_len = *total_len + ft_strlen(strs[i]);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		total_len;
	int		j;

	i = 0;
	j = 0;
	if (size < 1)
		return (0);
	total_len = 0;
	big_len(i, size, &total_len, strs);
	total_len = total_len + ((ft_strlen(sep)) * (size - 1));
	result = (char *)malloc(total_len + 1);
	if (!result)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(&j, result, strs[i]);
		if (size > 1 && i < size -1)
			ft_strcpy(&j, result, sep);
		i++;
	}
	result[j] = '\0';
	return (result);
}
