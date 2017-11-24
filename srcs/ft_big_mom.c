/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_mom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:24:57 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/24 23:39:39 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtet.h"
#include "libft.h"

void	ft_big_mom(t_piece *list, char *patern)
{
	while (list)
	{
		if (!(ft_check_free(patern, list->letter)))
		{
			ft_patern_add(patern);
		}
		if (!(ft_add_piece(patern, list, ft_currentcord(patern, list))))
		{
			if (list->prev)
				list = list->prev;
			else
				ft_patern_add(patern);
		}
		else
		{
			list = list->next;
		}
	}
	ft_putstr(patern);
}
