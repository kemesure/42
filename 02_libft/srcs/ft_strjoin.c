/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/19 17:46:33 by kemesure         ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
