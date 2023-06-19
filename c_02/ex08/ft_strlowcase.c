/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fverge <fverge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:02:08 by fverge            #+#    #+#             */
/*   Updated: 2023/06/19 20:02:59 by fverge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_upper(str[i]) == 0)
			str[i] += 32;
		i++;
	}
	return (str);
}
