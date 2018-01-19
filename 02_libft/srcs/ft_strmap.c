/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/19 18:04:26 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION :
**	Applique la fonction f à chaque caractère de la chaine de caractères
**	passée en paramètre pour créer une nouvelle chaine “fraiche”
**	(avec malloc(3)) résultant des applications successives de f.
**
**	Param. #1 La chaine de caractères sur laquelle itérer.
**
**	Param. #2 La fonction à appeler sur chaque caractère de s.
**
**	RETURN VALUE :
**	La chaine “fraiche” résultant des applications successives de f.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;

	if (s == NULL)
		return (NULL);
	i = -1;
	str = malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[++i])
		str[i] = f(s[i]);
	str[i] = '\0';
	return (str);
}
