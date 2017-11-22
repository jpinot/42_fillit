/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkpos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 23:25:14 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/22 19:27:30 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lintet.h"

int		*ft_checkpos(char *s)
{
	static int pos[8];
	int i;
	int j;
	int n;
	int tmp;

	i = 0;
	j = 2;
	n = 0;
//	pos[0] = 0;
	while (s[i] != '#')
		i++;
	tmp = i;
	i++;
	while (i < 19)
	{
		if (s[i] == '#')
		{
			if (s[i - 1] == '#')
			{
				pos[j] = pos[j - 2];
				pos[j + 1] = pos[j - 1] + 1;
				n++;
			}
			if (s[i - 1] != '#')
			{
				pos[j] = pos[j - 2] - 1;
				pos[j + 1] = i - tmp + (5 * pos[j]);
			}
			j += 2;
		}
		i++;
	}
	return (pos);
}

int		main(int c, char **v)
{
	int *n = ft_checkpos(v[1]);
	int i = 0;

	while (i != 8)
	{
		printf("%i  ", n[i]);
		i++;
		if (i % 2 == 0)
			printf("\n");
	}
	return (0);
}
