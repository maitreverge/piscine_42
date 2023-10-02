/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:44:46 by flverge           #+#    #+#             */
/*   Updated: 2023/08/01 12:34:09 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*master_struct;
	int			i;

	i = 0;
	master_struct = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!master_struct)
		return (0);
	while (i < ac)
	{
		master_struct[i].size = ft_strlen(av[i]);
		master_struct[i].str = av[i];
		master_struct[i].copy = ft_strdup(master_struct[i].str);
		i++;
	}
	master_struct[i].str = 0;
	return (master_struct);
}
