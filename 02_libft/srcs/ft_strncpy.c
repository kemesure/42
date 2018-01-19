/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:53:37 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/19 18:20:19 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	i = -1;
	ptr1 = dst;
	ptr2 = (char *)src;
	while (ptr2[++i] && i < len)
		ptr1[i] = ptr2[i];
	--i;
	while (++i < len)
		ptr1[i] = '\0';
	return (dst);
}
