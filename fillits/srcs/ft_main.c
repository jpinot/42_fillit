/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 23:55:47 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/27 17:30:39 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

int		main(int argc, char **argv)
{
	char		*str;
	char		*patern;
	int			minsq;
	t_piece		*newlist;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit sample.fillit\n");
		return (0);
	}
	str = ft_createfile(argv[1]);
	if (!(ft_checkerrors(str)))
	{
		ft_putstr("error\n");
		return (0);
	}
	newlist = ft_structadd(str);
	minsq = ft_check_min_square(newlist->piece);
	patern = ft_patern_new(minsq);
	ft_big_mom(newlist, patern);
	return (0);
}
