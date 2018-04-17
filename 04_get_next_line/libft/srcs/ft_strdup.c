/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:04:28 by kemesure          #+#    #+#             */
/*   Updated: 2018/04/17 16:37:00 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION :
**	Copie la source dans une destination malloquee et retourne la destination.
*/

//                   src  = " \0"
char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src); // len = 1
	dest = (char *)malloc(len + 1); // dest = 2 octets
	if (dest == NULL) // FAUX
		return (NULL);
	ft_strcpy(dest, src); // dest = " "
	dest[len] = '\0';     // dest = " \0"
	return (dest);
}
