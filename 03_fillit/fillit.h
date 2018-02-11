/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 16:40:24 by kemesure          #+#    #+#             */
/*   Updated: 2018/02/11 13:46:58 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

/*
**	pour open
*/
#include <fcntl.h>
/*
**	pour read, write et close
*/
#include <unistd.h>
/*
**	pour malloc et free
*/
#include <stdlib.h>
#include "./libft/libft.h"

	ft_read_file();
int		ft_check_valid_file(int fd);
void	ft_place_tetriminos(int fd);
void	ft_print_tetriminos(int fd);

struct		s_coord
{
	int		x[4];
	int		y[4];
};

#endif
