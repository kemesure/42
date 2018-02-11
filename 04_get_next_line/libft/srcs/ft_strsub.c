/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2018/02/06 16:57:51 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION :
**	Alloue (avec malloc(3)) et retourne la copie “fraiche” d’un
**	tronçon de la chaine de caractères passée en paramètre. Le
**	tronçon commence à l’index start et à pour longueur len. Si
**	start et len ne désignent pas un tronçon de chaine valide,
**	le comportement est indéterminé. Si l’allocation échoue, la
**	fonction renvoie NULL.
**
**	Param. #1 La chaine de caractères dans laquelle chercher le tronçon à copier
**
**	Param. #2 L’index dans la chaine de caractères où débute le tronçon à copier
**
**	Param. #3 La longueur du tronçon à copier.
**
**	RETURN VALUE :
**	Le tronçon.
*/

// "ligne 01\nl2\nln 03\nln04\nln5\nligne\0",      9,         23
// "012345678 901 234567 89012 3456 789012 "
// "0          1           2           3   "
char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	if (s == NULL)
		return (NULL);
	i = -1;
	str = (char *)malloc(len + 1); // 24 octets
	if (str == NULL)
		return (NULL);
	while (++i < len) // 0 < 23
		str[i] = s[start + i]; // str = "l2\nln 03\nln04\nln5\nligne"
	str[i] = '\0';			   // str = "l2\nln 03\nln04\nln5\nligne\0"
	return (str);
}
