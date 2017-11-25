/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_mom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:24:57 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/25 19:29:51 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtet.h"
#include "libft.h"

int		ft_check_state(char *patern, char c)
{
	int i;

	i = 0;
	while (patern[i])
	{
		if (patern[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_check_finish(char *patern, char c)
{
	int i;
	int j;

	i = ft_strlen(patern);
	j = i;
	while (patern[i])
	{
		write(1, "g", 1);
		if (patern[i] == c)
		{
			if (j - i < 3)
				return (1);
		}
		i--;
	}
	return (0);
}

void	ft_big_mom(t_piece *list, char *patern)
{
	while (list)
	{
		if (!(ft_check_free(patern, list->letter)))
		{
			patern = ft_patern_add(patern);
		}
		if (!(ft_add_piece(patern, list, ft_currentcord(patern, list))))
		{
			if (list->prev)
			{
				list = list->prev;
			}
			else
			{
				patern = ft_patern_add(patern);
				ft_erase(patern, list);
			}
		}
		else
		{
			list = list->next;
		}
	}
	ft_putstr(patern);
}
