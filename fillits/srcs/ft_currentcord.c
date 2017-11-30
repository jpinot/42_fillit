/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_currentcord.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 22:32:10 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/25 19:30:58 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

void	ft_erase(char *patern, t_piece *lista)
{
	int i;

	i = 0;
	while (patern[i])
	{
		if (patern[i] == lista->letter)
			patern[i] = '.';
		i++;
	}
}

int		ft_currentcord(char *patern, t_piece *lista)
{
	int i;

	i = 0;
	while (patern[i])
	{
		if (patern[i] == lista->letter)
		{
			ft_erase(patern, lista);
			return (i + 1);
		}
		i++;
	}
	i = 0;
	while (patern[i])
	{
		if (patern[i] == '.')
			return (i);
		i++;
	}
	return (-1);
}
