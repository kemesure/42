/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:54:57 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/03 17:39:58 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	int		i;
	int		j;
	char	*ptr1;
	char	*ptr2;

	i = 0;
	j = 0;
	size++;
	ptr1 = dst;
	ptr2 = (char *)src;
	while (ptr1[i])
	{
		i++;
	}
	while (ptr2[j] && size - 1)
	{
		ptr1[i] = ptr2[j];
		i++;
		j++;
		size--;
	}
	ptr1[i] = '\0';
	return (size + strlen(ptr1));
}
