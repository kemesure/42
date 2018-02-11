/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 12:31:17 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/22 13:45:54 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	EXEMPLES :
**	ft_strchr("0123456789\0",  '4') -> Retourne "456789\0"
**	ft_strchr("0123456789\0", '\0') -> Retourne "\0"
**	ft_strchr("0123 56789\0",  '4') -> Retourne NULL
*/

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = -1;
	ptr = (char *)s;
	while (ptr[++i] || c == '\0')
		if (ptr[i] == c)
			return (ptr + i);
	return (NULL);
}
