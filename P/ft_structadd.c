/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structadd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 19:48:53 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/22 22:40:41 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "libtet.h"

t_piece		ft_structadd(char *s)
{
	t_piece *bgn;
	t_piece *new;
	char letter;

	letter = A;
	if (!(new = ft_structnew(ft_checkpos(s)), letter))
		return (NULL);
	s += 21;
	bgn = new;
	while(s)
	{
		if (!(new->next = ft_structnew(ft_checkpos(s)), letter))
			return (NULL);
		new = new->next;
		s += 21;
		letter++;
	}
	return (bgn);
}
