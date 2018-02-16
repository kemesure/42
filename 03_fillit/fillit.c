/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:35:35 by kemesure          #+#    #+#             */
/*   Updated: 2018/02/15 13:12:16 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	DESCRIPTION :
**	Sorte de Tetris, qui doit faire le plus petit carre possible,
**	le plus en haut et le plus a droite avec des pieces
**	de Tetriminos passees en argument dans un fichier.
**
**	ERRORS :
**	Il ne doit y avoir qu'un seul argument,
**	sinon le programme affiche son usage et quitte proprement.
**	Les pieces de Tetriminos dans le fichier passe en argument doivent toutes
**	etre valides, sinon le programme affiche "error" et quitte proprement.
**	(Les criteres de validite sont decris en commentaire dans la fonction
**	ft_check_valid_file()).
*/

#include "fillit.h"

int		main(int ac, char **av)
{
	int				fd;
	unsigned char	*tab[16][5];

	if (ac != 2)
	{
		write(1, "usage: ./fillit file\n", 21);
		return (-1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (-1);
	if (ft_check_valid_file(fd, tab) == -1)
	{
		write(1, "error\n", 6);
		return (-1);
	}
	ft_place_tetriminos(tab);
	ft_print_tetriminos(tab);
	close(fd);
	return (0);
}
