/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:54:57 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/16 17:05:26 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
	j = 0;
	ptr1 = dst;
	ptr2 = (char *)src;
	i = ft_strlen(ptr1);
	while (ptr2[j] && i + 1 < size)
	{
		ptr1[i] = ptr2[j];
		i++;
		j++;
	}
	ptr1[i] = '\0';
	return (len);
}
