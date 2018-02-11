/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:35:35 by kemesure          #+#    #+#             */
/*   Updated: 2018/02/11 13:46:57 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	DESCRIPTION :
**	Sorte de Tetris, qui doit faire le plus petit carre possible avec des pieces
**	de Tetriminos passees en argument dans un fichier.
**
**	ERRORS :
**	Il ne doit y avoir qu'un seul argument, sinon le programme affiche son usage
**	et quitte proprement.
**	Les pieces de Tetriminos dans le fichier passe en argument doivent toutes
**	etre valides, sinon le programme affiche "error" et quitte proprement.
*/

#include "fillit.h"

int		main(int ac, char **av)
{
	int		fd;

	fd = open("tetriminos.txt", O_RDONLY);
	if (fd == -1)
		return (NULL);
	if (ac != 2)
	{
		write(1, "usage: ./fillit file\n", 21);
		return (NULL);
	}
	if (ft_check_valid_file(fd) == -1)
	{
		write(1, "error\n", 6);
		return (NULL);
	}
	ft_place_tetriminos(fd);
	ft_print_tetriminos(fd);
	close(fd);
	return (0);
}
