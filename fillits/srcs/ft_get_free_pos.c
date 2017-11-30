/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_free_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:48:38 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/27 12:44:46 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

int		ft_check_available(char *patern, int i, int *p)
{
	int j;
	int size;

	size = ft_patern_xcalc(patern) + 1;
	j = 2;
	while (j < 7)
	{
		if (patern[size * p[j] + p[j + 1] + i] != '.')
			return (0);
		j += 2;
	}
	return (1);
}

int		ft_get_free_pos(char *patern, int *piece, int i)
{
	while (patern[i])
	{
		if (patern[i] == '.')
		{
			if (ft_check_available(patern, i, piece))
				return (i);
		}
		i++;
	}
	return (-1);
}
