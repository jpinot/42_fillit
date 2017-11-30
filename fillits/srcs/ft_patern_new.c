/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_patern_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 21:43:12 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/25 23:03:24 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

char	*ft_patern_new(size_t n)
{
	char	*str;
	int		size;
	int		i;
	size_t	j;

	i = 0;
	size = (n + 1) * n;
	if (!(str = ft_strnew(size)))
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (j < n && i < size)
		{
			str[i] = '.';
			i++;
			j++;
		}
		str[i] = '\n';
		i++;
	}
	return (str);
}
