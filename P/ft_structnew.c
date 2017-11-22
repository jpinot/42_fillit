/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 18:57:59 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/22 19:54:38 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

t_list	*ft_structnew(int const *piece, size_t min_square)
{
	t_piece *struct;

	if (!(struct = (t_piece *)malloc(sizeof(t_piece))))
		return (NULL);
	if (piece == NULL)
	{
		struct->piece = NULL;
		struct->min_square = 0;
	}
	if (!(ft_checktet(s)))
		return (NULL);
	else
	{
		if (!(struct->piece = (char *)malloc(content)))
			return (NULL);
		ft_intcpy(struct->piece, piece);
	}
	struct->next = NULL;
	struct->pre = NULL;
	return (struct);
}
