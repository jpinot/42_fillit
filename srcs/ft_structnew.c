/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 18:57:59 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/27 12:43:41 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

void	ft_intcpy(int *dst, const int *str)
{
	size_t i;

	i = 0;
	while (i < 8)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = 0;
}

t_piece	*ft_structnew(int const *piece, int letter)
{
	t_piece *list;

	if (!(list = (t_piece *)malloc(sizeof(t_piece))))
		return (NULL);
	if (piece == NULL)
	{
		list->piece = NULL;
		list->letter = 0;
	}
	if (!(list->piece = (int *)malloc(sizeof(int) * 8)))
		return (NULL);
	ft_intcpy(list->piece, piece);
	list->letter = letter;
	list->next = NULL;
	list->prev = NULL;
	return (list);
}
