/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fverge <fverge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:44:23 by fverge            #+#    #+#             */
/*   Updated: 2023/06/26 13:05:09 by fverge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*allocate(int min, int len, int *buffer)
{
	int	i;

	i = 0;
	while (i < len)
	{
		buffer[i] = min;
		i++;
		min++;
	}
	return (buffer);
}

int	*ft_range(int min, int max)
{
	int	len;
	int	*buffer;

	if (min < max)
	{
		len = max - min;
		buffer = (int *)malloc(sizeof(int) * len);
		if (buffer == NULL)
			exit (1);
		allocate(min, len, buffer);
		return (buffer);
	}
	else
		return (NULL);
}
