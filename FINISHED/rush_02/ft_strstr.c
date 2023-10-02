/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:27:18 by leoherna          #+#    #+#             */
/*   Updated: 2023/07/30 17:09:02 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

int	ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
		{
			if (to_find[j] == '\0')
			{
				return (i - j);
			}
			j++;
			i++;
		}
		i++;
	}
	return (0);
}
