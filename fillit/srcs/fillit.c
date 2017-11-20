/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 04:31:04 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/20 21:49:07 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	ft_argc_error(int argc);

	return (0);
}

void	ft_argc_error(int argc)
{
	if (argc != 1)
	ft_putstr("Wrong number of input files");
}

void	ft_showfile(int argc, char **argv)
{
	int f;
	char buffer;

	f = open(argv[1], O_RDONLY);
	while (read(f, &buffer, 1) != 0)
		write(1, &buffer, 1);
}
