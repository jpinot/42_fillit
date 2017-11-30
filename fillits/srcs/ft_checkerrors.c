/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkerrors.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:36:45 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/26 03:15:14 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

int		ft_check_column(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < 20 && str[i] != '\0')
	{
		count++;
		if (str[i] == '\n')
		{
			if (count != 5)
				return (0);
			count = 0;
		}
		i++;
	}
	return (1);
}

size_t	ft_check_length(char *str)
{
	size_t size;

	size = ft_strlen(str) + 1;
	if ((size % 21) != 0)
		return (0);
	return (1);
}

int		ft_checkfour(char *str)
{
	int i;
	int count;
	int count2;

	i = 0;
	count = 0;
	count2 = 0;
	while (i < 21 && str[i] != '\0')
	{
		if (str[i] != '.' && str[i] != '\n' && str[i] != '#')
			return (0);
		if (str[i] == '#')
			count++;
		if (str[i] == '.')
			count2++;
		i++;
	}
	if (count != 4 || count2 != 12)
		return (0);
	return (1);
}

size_t	ft_checkerrors(char *str)
{
	char	*s;
	size_t	nb;

	if (!(ft_check_length(str)))
		return (0);
	s = str;
	nb = (ft_strlen(s) + 1) / 21;
	while (nb > 0)
	{
		if (!(ft_check_column(s)))
			return (0);
		if (!(ft_checkfour(s)))
			return (0);
		if (!(ft_checktet(s)))
			return (0);
		s += 21;
		nb--;
	}
	return (1);
}
