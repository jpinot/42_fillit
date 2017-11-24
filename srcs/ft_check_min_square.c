/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_min_square.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 20:14:56 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/24 21:54:02 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

int		ft_check_min_square(int *str)
{
	int n;
	int i;
	int tmp;

	tmp = 0;
	n = 0;
	i = 0;
	while (tmp++ < 8)
	{
		if (str[i] < 0)
			str[i] = str[i] * (-1);
		if (n < str[i])
			n = str[i];
		i++;
	}
	n++;
	return (n);
}
