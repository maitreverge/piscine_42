/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fverge <fverge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:09:28 by fverge            #+#    #+#             */
/*   Updated: 2023/06/26 14:05:30 by fverge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*allocate(int min, int len, int **range)
{
	int	i;

	i = 0;
	while (i < len)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (*range);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;

	if (min < max)
	{
		len = max - min;
		*range = (int *)malloc(sizeof(int) * len);
		if (*range == NULL)
			return (-1);
		allocate(min, len, range);
		return (len);
	}
	else
	{
		*range = NULL;
		return (0);
	}
}
