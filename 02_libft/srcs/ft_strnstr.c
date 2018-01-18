/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 14:01:09 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/18 14:47:14 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION :
**	La fonction strnstr() localise la premiere occurrence de la chaine needle
**	(terminee par '\0') dans la chaine haystack (terminee par '\0'), ou pas plus
**	de len caracteres sont cherches. Les caracteres qui apparaissent apres un
**	'\0' ne sont pas cherches.
**
**	RETURN VALUES :
**	Si needle est une chaine vide, haystack est retourne;
**	si needle n'apparait pas dans haystack, NULL est retourne;
**	sinon un pointeur sur le premier caractere de la premiere occurrence de
**	needle est retourne.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;
	size_t	j;

	s1 = (char *)haystack;
	s2 = (char *)needle;
	i = 0;
	if (s2[0] == '\0')
		return (s1);
	while (len > i && s1[i])
	{
		j = 0;
		while (s2[j] == '\0' || (len > i + j && s1[i + j] == s2[j]))
		{
			if (s2[j] == '\0')
				return (s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
