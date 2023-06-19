/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fverge <fverge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:14:45 by fverge            #+#    #+#             */
/*   Updated: 2023/06/19 20:00:56 by fverge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_lower(str[i]) == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
