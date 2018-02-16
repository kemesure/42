/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_tetriminos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 12:28:07 by kemesure          #+#    #+#             */
/*   Updated: 2018/02/14 15:22:34 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	carre 2*2
**	si les pieces rentrent dans le carre return le carre
**	sinon agrandir le carre 3*3
**	...
*/

#include "fillit.h"

unsigned char	**ft_place_tetriminos(unsigned char **tab)
{
	unsigned char	**square;
	unsigned int	sizetab;
	int				i;
	int				j;
	int				b;

	sizetab = 2;
	i = 0;
	j = 0;
	b = 1;
	while (b) // Tant que tous les tetriminos ne sont pas rentres dans le carre
	{
		square = (unsigned char **)malloc(sizeof(unsigned char *) * sizetab + 1)
		// 3 unsigned char * d'alloues
		if (square == NULL)
			return (NULL);
		sizetmp = sizetab; // sizetmp = 2
		square[sizetmp] = (unsigned char *)malloc(1); // square[2] = 1 octet
		if (square[sizetmp] == NULL)
			return (NULL);
		square[sizetmp] = NULL; // square[2] = NULL
		while (sizetmp) // 0 FAUX
		{
			square[sizetmp - 1] = (unsigned char *)malloc(sizetab + 1);
			// square[1] = 3 octets
			// square[0] = 3 octets
			if (square[sizetmp] == NULL)
				return (NULL);
			--sizetmp; // sizetmp = 0
		}
		++sizetab; // sizetab = 3
		if () // Si tous les tetriminos sont rentres dans le carre
			b = 0;
		else
			free(square);
	}
	return (square);
}
