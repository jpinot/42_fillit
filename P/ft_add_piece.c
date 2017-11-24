/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_piece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:15:52 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/24 01:24:42 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

#include <stdio.h>

void	ft_put_piece(char *patern, t_piece *p, int i)
{
	int j;
    int size;

    size = ft_patern_xcalc(patern) + 1;
    j = 0;
    while(j < 7)
	{
		patern[size * p->piece[j] + p->piece[j + 1] + i] = p->letter;
		j += 2;
	}
}

void	ft_add_piece(char *patern, t_piece *p, int i)
{
	int j;

	if ((j = ft_get_free_pos(patern, p->piece, i)) < 0)
	{
		printf("%i", j);
		return;
	}
	else
		ft_put_piece(patern, p, j);
	ft_putstr(patern);
}

#include <stdio.h>

int     main(void)
{
	t_piece p;

	int x[8] = {0, 0, 1, -2, 1, -1, 1, 0};
	p.piece = x;
	p.letter = 'P';
	char c[] = "ABB.\nABB.\nABB.\nA...\n\n";
	ft_add_piece(c, &p, 1);
	ft_putstr(c);
	return (0);
}
