/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:54:57 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/19 17:55:13 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	int		j;
	char	*ptr1;
	char	*ptr2;
	size_t	len;

	len = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	j = -1;
	ptr1 = dst;
	ptr2 = (char *)src;
	i = ft_strlen(ptr1);
	while (ptr2[++j] && i + 1 < size)
	{
		ptr1[i] = ptr2[j];
		i++;
	}
	ptr1[i] = '\0';
	return (len);
}
