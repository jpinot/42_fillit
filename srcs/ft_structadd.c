/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structadd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 19:48:53 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/27 17:25:50 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

t_piece		*ft_structadd(char *s)
{
	t_piece		*bgn;
	t_piece		*new;
	t_piece		*tmp;
	char		letter;
	int			nb;

	nb = (ft_strlen(s) + 1) / 21;
	letter = 'A';
	if (!(new = ft_structnew(ft_checkpos(s), letter)))
		return (NULL);
	s += 21;
	bgn = new;
	while (nb > 1)
	{
		letter++;
		tmp = new;
		if (!(new->next = ft_structnew(ft_checkpos(s), letter)))
			return (NULL);
		new = new->next;
		new->prev = tmp;
		s += 21;
		nb--;
	}
	return (bgn);
}
