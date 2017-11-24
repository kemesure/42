/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 17:52:27 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/24 23:27:20 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	if (src == dest)
		return (dest);
	i = 0;
	ptr1 = dest;
	ptr2 = (char *)src;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		if (ptr1[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char	*dest;
	char	*src;
	size_t	n;

	src  = malloc(42);
	dest = (char *)malloc(42);
	strcpy(src, "bonjour");
	n1 = 7;
	printf("   memccpy(dest, \"%s\", 110, %d) : \"%s\"\n", src, n, (char *)   memccpy(dest, src, 110, n));
	printf("ft_memccpy(dest, \"%s\", 110, %d) : \"%s\"\n", src, n, (char *)ft_memccpy(dest, src, 110, n));
	printf("\n");
	printf("   memccpy(dest, \"%s\",   0, %d) : \"%s\"\n", src, n, (char *)   memccpy(dest, src,   0, n));
	printf("ft_memccpy(dest, \"%s\",   0, %d) : \"%s\"\n", src, n, (char *)ft_memccpy(dest, src,   0, n));
	printf("\n");
	printf("   memccpy(dest, \"%s\", 110, %d) : \"%s\"\n", src, n, (char *)   memccpy(dest, src, 110, n));
	printf("ft_memccpy(dest, \"%s\", 110, %d) : \"%s\"\n", src, n, (char *)ft_memccpy(dest, src, 110, n));
	return (0);
}
