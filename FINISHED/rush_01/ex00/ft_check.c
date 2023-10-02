/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:40:17 by rmesa             #+#    #+#             */
/*   Updated: 2023/07/23 19:55:28 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

int	ft_check(int check[4][4], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if ((check[0][i] + check[1][i]) < 3 || (check[2][i] + check[3][i]) < 3)
			return (0);
		if ((check[0][i] + check[1][i]) > 5 || (check[2][i] + check[3][i]) > 5)
			return (0);
		i++;
	}
	return (1);
}
