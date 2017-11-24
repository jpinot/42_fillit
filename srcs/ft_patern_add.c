/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_patern_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 22:40:58 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/24 20:59:56 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

static char	*ft_patern_add_empty(char *c, int i, int n)
{
	int j;

	j = 0;
	while (j < n)
	{
		c[i] = '.';
		i++;
		j++;
	}
	c[i] = '\n';
	c[++i] = '\n';
	c[++i] = 0;
	return (c);
}

void		ft_patern_add(char *str)
{
	char	*dst;
	size_t	i;
	size_t	j;
	int		size;

	i = 0;
	j = 0;
	size = ft_strlen(str) + ((ft_patern_xcalc(str) + 2) * 2);
	if (!(dst = ft_strnew(size)))
		return ;
	while (j < (ft_strlen(str) - 1))
	{
		if (str[j] == '\n')
		{
			dst[i] = '.';
			i++;
		}
		dst[i] = str[j];
		i++;
		j++;
	}
	dst = ft_patern_add_empty(dst, i, ft_patern_xcalc(str) + 1);
}
