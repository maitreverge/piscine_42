/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fverge <fverge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:04:54 by fverge            #+#    #+#             */
/*   Updated: 2023/06/19 15:46:40 by fverge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	temp = 0;
	if (size > 1)
	{
		while (i < size - 1)
		{
			j = i + 1;
			while (j < size)
			{
				if (tab[i] >= tab[j])
				{
					temp = tab[i];
					tab[i] = tab[j];
					tab[j] = temp;
				}
				j++;
			}
			i++;
		}
	}
}
