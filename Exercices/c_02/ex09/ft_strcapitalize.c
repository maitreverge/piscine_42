/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fverge <fverge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:07:45 by fverge            #+#    #+#             */
/*   Updated: 2023/06/19 20:36:46 by fverge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ch_an(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}

int	ch_low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}

int	ch_up(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ch_low(str[0]) == 0)
			str[0] -= 32;
		if (ch_an(str[i -1]) == 0 && ch_up(str[i]) == 0)
			str[i] += 32;
		if (ch_an(str[i -1]) == 1 && ch_low(str[i]) == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
