/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtet.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 19:24:20 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/26 03:29:59 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBTET_H
# define LIBTET_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct			s_piece
{
	int					*piece;
	int					letter;
	struct s_piece		*next;
	struct s_piece		*prev;
}						t_piece;

int						main(int argc, char **argv);
size_t					ft_checkerrors(char *str);
void					ft_put_piece(char *patern, t_piece *p, int i);
void					ft_big_mom(t_piece *list, char *patern);
int						ft_check_free(const char *s, char c);
int						ft_check_min_square(int *sr);
int						*ft_checkpos(char *s);
void					ft_argcerr(int n);
t_piece					*ft_structnew(int const *piece, int letter);
t_piece					*ft_structadd(char *s);
size_t					ft_checktet(char *s);
int						ft_currentcord(char *patern, t_piece *lista);
int						ft_get_free_pos(char *patern, int *piece, int i);
int						ft_add_piece(char *patern, t_piece *p, int i);
t_piece					*ft_structnew(int const *piece, int letter);
char					*ft_patern_add(char *str);
char					*ft_patern_new(size_t n);
size_t					ft_patern_xcalc(const char *s);
void					ft_erase(char *patern, t_piece *lista);
char					*ft_createfile(char *argv);

#endif
