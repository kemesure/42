/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 13:46:56 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/03 16:11:18 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		size;
	char	*ptr;

	size = 0;
	ptr = (char *)s;
	while (ptr[size])
		size++;
	while (size != -1)
	{
		if (ptr[size] == c)
			return (ptr + size);
		size--;
	}
	return (NULL);
}
