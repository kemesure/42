/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/18 14:56:26 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION :
**	Alloue (avec malloc(3)) et retourne une copie de la chaine
**	passée en paramètre sans les espaces blancs au debut et à la
**	fin de cette chaine. On considère comme espaces blancs les
**	caractères ’ ’, ’\n’ et ’\t’. Si s ne contient pas d’espaces
**	blancs au début ou à la fin, la fonction renvoie une copie de
**	s. Si l’allocation echoue, la fonction renvoie NULL.
**
**	Param. #1 La chaine de caractères à trimmer.
**
**	RETURN VALUE :
**	La chaine de caractère “fraiche” trimmée ou bien une copie
**	de s sinon.
*/

static char		*ft_allocation(char const *s, size_t *i, size_t *j, size_t *len)
{
	char	*str;

	while (s[*j])
	{
		*len = *j;
		while (s[*len] != '\0' && s[*len] != ' ' &&
				s[*len] != '\n' && s[*len] != '\t')
			++(*len);
		*j = *len;
		while (s[*j] == ' ' || s[*j] == '\n' || s[*j] == '\t')
			++(*j);
	}
	str = (char *)malloc(*len - *i + 1);
	return (str);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!(len = 0) && s == NULL)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		++i;
	j = i;
	if (s[i] == '\0' && !(i = 0))
	{
		j = 0;
		str = ft_allocation("", &i, &j, &len);
	}
	else
		str = ft_allocation(s, &i, &j, &len);
	if (str == NULL)
		return (NULL);
	j = -1;
	while (i + ++j < len)
		str[j] = s[i + j];
	str[j] = '\0';
	return (str);
}
