/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 13:46:56 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/02 13:58:55 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

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

int		main(void)
{
	char	*s;
	char	c;

	s = (char *)malloc(42);
	c = 'm';
	strcpy(s, "abcdefghijklmnopqrstuvwxyz mmm ...");
	printf("   strrchr : %s\n",    strrchr(s, c));
	printf("ft_strrchr : %s\n", ft_strrchr(s, c));
	return (0);
}
