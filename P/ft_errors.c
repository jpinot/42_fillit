/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:58:16 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/22 19:44:54 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

void	ft_argcerr(int n)
{
	if (n == 1)
		ft_putstr("No input file");
	if (n > 2)
		ft_putstr("Wrong number of input files");
}
