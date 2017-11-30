/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_piece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:15:52 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/27 13:22:19 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

void	ft_put_piece(char *patern, t_piece *p, int i)
{
	int j;
	int size;

	size = ft_patern_xcalc(patern) + 1;
	j = 0;
	while (j < 7)
	{
		patern[size * p->piece[j] + p->piece[j + 1] + i] = p->letter;
		j += 2;
	}
}

int		ft_add_piece(char *patern, t_piece *p, int i)
{
	int j;

	if ((j = ft_get_free_pos(patern, p->piece, i)) < 0)
	{
		return (0);
	}
	else
		ft_put_piece(patern, p, j);
	return (1);
}
