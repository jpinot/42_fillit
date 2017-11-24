/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkpos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 23:25:14 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/24 19:04:47 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

static int	ft_check_pos(char *s, int i, int tmp, int *pos)
{
	int j;
	int n;

	j = 2;
	n = 0;
	while (i < 19)
	{
		if (s[i] == '#')
		{
			if (s[i - 1] == '#')
			{
				pos[j] = pos[j - 2];
				pos[j + 1] = pos[j - 1] + 1;
				n++;
			}
			if (s[i - 1] != '#')
			{
				pos[j] = pos[j - 2] + 1;
				pos[j + 1] = i - tmp - (5 * pos[j]);
			}
			j += 2;
		}
		i++;
	}
	return (pos);
}

int			*ft_checkpos(char *s)
{
	int pos[8];
	int i;
	int tmp;

	i = 0;
	while (s[i] != '#')
		i++;
	tmp = i;
	i++;
	return (ft_check_pos(s, i, tmp, pos));
}
