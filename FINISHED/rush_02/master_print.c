/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:57:18 by flverge           #+#    #+#             */
/*   Updated: 2023/07/30 18:24:48 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

void	master_print(char **result)
{
	int	i;
	int	len;

	len = ft_strlen(result);
	i = 0;
	while (i < len)
	{
		ft_putstr(result[i]);
		ft_putchar(' ');
		i++;
	}
}
