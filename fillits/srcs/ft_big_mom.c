/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_mom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:24:57 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/27 17:31:12 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtet.h"
#include "libft.h"

void	ft_big_mom(t_piece *list, char *patern)
{
	t_piece *tmp;

	tmp = list;
	while (list)
	{
		if (!(ft_check_free(patern, list->letter)))
		{
			patern = ft_patern_new(ft_patern_xcalc(patern) + 1);
			ft_big_mom(tmp, patern);
			return ;
		}
		if (!(ft_add_piece(patern, list, ft_currentcord(patern, list))))
		{
			if (list->prev)
				list = list->prev;
			else
			{
				patern = ft_patern_add(patern);
				ft_erase(patern, list);
			}
		}
		else
			list = list->next;
	}
	ft_putstr(patern);
}
