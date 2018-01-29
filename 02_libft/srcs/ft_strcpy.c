/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:35:12 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/22 13:45:58 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION :
**	Copie la source dans la destination et retourne la destination.
*/

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;
	char	*ptr1;
	char	*ptr2;

	i = -1;
	ptr1 = dst;
	ptr2 = (char *)src;
	while (ptr2[++i])
		ptr1[i] = ptr2[i];
	ptr1[i] = '\0';
	return (dst);
}
