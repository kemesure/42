/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2018/03/04 15:45:20 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	(Equivalent d'un ft_strcat malloque)
**
**	DESCRIPTION :
**	Alloue (avec malloc(3)) et retourne une chaine de caractères
**	“fraiche” terminée par un ’\0’ résultant de la concaténation
**	de s1 et s2. Si l’allocation echoue, la fonction renvoie NULL.
**
**	Param. #1 La chaine de caractères préfixe.
**
**	Param. #2 La chaine de caractères suffixe.
**
**	RETURN VALUE :
**	La chaine de caractère “fraiche” résultant de la concaténation
**	des deux chaines.
*/

// Dans gnl la ligne qui appelle ft_strjoin() :
// *line = ft_strjoin(*line, buff);

// s1 = "abcdefghijklmnopqrstuvwxyz012345\0"
//      "012345678901234567890123456789012 "
//      "0         1         2         3   "
// s2 = "6789\nabcdefghijklmnopqrstuvwxyz\n\0"
//      "01234 567890123456789012345678901 2 "
//      "0          1         2         3    "
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	// str = 32 + 32 + 1 octets = 65 octets
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	// str = "abcdefghijklmnopqrstuvwxyz012345\0"
	//       "012345678901234567890123456789012 "
	//       "0         1         2         3   "
	ft_strcpy(str, s1);
	// str = "abcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\n\0"
	//       "0123456789012345678901234567890123456 789012345678901234567890123 4 "
	//       "0         1         2         3          4         5         6      "
	ft_strcat(str, s2);
	return (str);
}
