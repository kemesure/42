/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 13:46:56 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/22 13:46:17 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION :
**	The strchr() function locates the first occurrence of c (converted to a
**	char) in the string pointed to by s. The terminating null character is
**	considered to be part of the string; therefore if c is `\0', the functions
**	locate the terminating `\0'.
**
**	The strrchr() function is identical to strchr(), except it locates the last
**	occurrence of c.
**
**	RETURN VALUES :
**	The functions strchr() and strrchr() return a pointer to the located
**	character, or NULL if the character does not appear in the string.
*/

char	*ft_strrchr(const char *s, int c)
{
	int		size;
	char	*ptr;

	size = 0;
	ptr = (char *)s;
	while (ptr[size])
		++size;
	++size;
	while (--size != -1)
		if (ptr[size] == c)
			return (ptr + size);
	return (NULL);
}
