/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:04:28 by kemesure          #+#    #+#             */
/*   Updated: 2018/03/04 14:54:34 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION :
**	Copie la source dans une destination malloquee et retourne la destination.
*/

// src  = "abcdefghijklmnopqrstuvwxyz012345\0"
//        "012345678901234567890123456789012 "
//        "0         1         2         3   "
char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src);
	dest = (char *)malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	dest[len] = '\0';
	return (dest);
}
// dest = "abcdefghijklmnopqrstuvwxyz012345\0"
