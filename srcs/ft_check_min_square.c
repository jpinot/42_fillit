/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_min_square.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 20:14:56 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/27 17:37:45 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

int		ft_check_min_square(int *str)
{
	int n;
	int i;
	int tmp;
	int str2[8];

	tmp = 0;
	n = 0;
	i = 0;
	while (tmp++ < 8)
	{
		if (str[i] < 0)
			str2[i] = str[i] * (-1);
		else
			str2[i] = str[i];
		i++;
	}
	i = 0;
	while (i < 8)
	{
		if (n < str2[i])
			n = str2[i];
		i++;
	}
	n++;
	return (n);
}
