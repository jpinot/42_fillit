/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 23:55:47 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/24 23:32:33 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"
#include <stdio.h>


int		main(int argc, char **argv)
{
	char		*str;
	char		*patern;
	t_piece		*newlist;

	if (argc < 2)
		return (0);
	str = ft_createfile(argv[1]);
	newlist = ft_structadd(str);


	int minsq;

	minsq = ft_check_min_square(newlist->piece);
	patern = ft_patern_new(minsq);
	ft_big_mom(newlist, patern);
	return (0);
}
