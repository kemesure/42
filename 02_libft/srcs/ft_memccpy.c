/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 17:52:27 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/19 14:13:34 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION :
**	La fonction memccpy() copies des octets de la chaine src dans la chaine dst.
**	Si le caractere c (convertis en unsigned char) apparait dans la chaine src,
**	la copie s'arrete et un pointeur sur l'octet d'apres le caractere c dans la
**	chaine dst est retourne. Sinon, n octets sont copies, et un pointeur NULL
**	est retourne. La source et la destination ne doivent pas overlap.
*/

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
					size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (src == dst)
		return (dst);
	i = 0;
	ptr1 = dst;
	ptr2 = (unsigned char *)src;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		if (ptr2[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
