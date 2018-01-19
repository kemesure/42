/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:12:07 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/19 15:58:51 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION :
**	Concatene s1 et s2 et retourne le resultat avec un '\0' a la fin.
*/

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int		i;
	int		j;
	char	*ptr1;
	char	*ptr2;

	j = -1;
	ptr1 = s1;
	ptr2 = (char *)s2;
	i = ft_strlen(ptr1);
	while (ptr2[++j])
		ptr1[i + j] = ptr2[j];
	ptr1[i + j] = '\0';
	return (s1);
}
