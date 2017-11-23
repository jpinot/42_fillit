/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtet.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 19:24:20 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/23 01:28:23 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBTET_H
# define LIBTET_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_piece
{
int					*piece;
int					letter;
struct s_piece		*next;
}					t_piece;

int  				*ft_checkpos(char *s);
void 				ft_argcerr(int n);
char				*ft_intcpy(int *dst, const int *str);
t_piece				*ft_strucadd(int const *piece, size_t min_square);
size_t				ft_checktet(char *s);
t_piece				*ft_structadd(char *s);
int					ft_check_min_square (int *str);
char				*ft_patern_new(size_t n);
char				*ft_patern_add(const char *str);
size_t				ft_patern_xcalc(const char *s);
#endif
