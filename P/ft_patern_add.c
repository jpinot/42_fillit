/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_patern_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 22:40:58 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/22 23:13:13 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//#include "libtet.h"

char	ft_patern_new(const *char str, size_t plus, size_t n)
{
	char *dst;

	i = ft_strlen(char) + plus + n;
	if (!(dst = ft_strnew(i)))
		return (NULL);
	while (i > 0)
	{

