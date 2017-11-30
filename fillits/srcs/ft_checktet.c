/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 19:23:26 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/25 22:11:50 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

size_t	ft_check_tet_rel(char *s, int i)
{
	int count;

	count = 0;
	if (s[i - 1] == '#' && i - 1 >= 0)
		count++;
	if (s[i + 1] == '#' && i + 1 < 20)
		count++;
	if (s[i - 5] == '#' && i - 5 >= 0)
		count++;
	if (s[i + 5] == '#' && i + 5 < 20)
		count++;
	return (count);
}

size_t	ft_checktet(char *s)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (i < 19)
	{
		while (s[i] != '\n')
		{
			if (s[i] == '#')
				count += ft_check_tet_rel(s, i);
			i++;
		}
		i++;
	}
	if (count < 6)
		return (0);
	return (1);
}
