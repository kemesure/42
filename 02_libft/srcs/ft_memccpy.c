/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 17:52:27 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/25 14:14:05 by kemesure         ###   ########.fr       */
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
	char	*dest1;
	char	*dest2;
	char	*dest3;
	char	*dest4;
	char	*dest5;
	char	*dest6;
	char	*src;
	size_t	n;

	src  = malloc(42);
	dest1 = (char *)malloc(42);
	dest2 = (char *)malloc(42);
	dest3 = (char *)malloc(42);
	dest4 = (char *)malloc(42);
	dest5 = (char *)malloc(42);
	dest6 = (char *)malloc(42);
	strcpy(src, "bonjour");
	n = 7;
	printf("   memccpy(dest, \"%s\", 110, %zu) : \"%s\"\n", src, n, (char *)   memccpy(dest1, src, 110, n));
	printf("dest = \"%s\"\n", dest1);
	printf("ft_memccpy(dest, \"%s\", 110, %zu) : \"%s\"\n", src, n, (char *)ft_memccpy(dest2, src, 110, n));
	printf("dest = \"%s\"\n", dest2);
	printf("\n");
	printf("   memccpy(dest, \"%s\",   0, %zu) : \"%s\"\n", src, n, (char *)   memccpy(dest3, src,   0, n));
	printf("dest = \"%s\"\n", dest3);
	printf("ft_memccpy(dest, \"%s\",   0, %zu) : \"%s\"\n", src, n, (char *)ft_memccpy(dest4, src,   0, n));
	printf("dest = \"%s\"\n", dest4);
	printf("\n");
	printf("   memccpy(dest, \"%s\", 110, %zu) : \"%s\"\n", src, n, (char *)   memccpy(dest5, src, 110, n));
	printf("dest = \"%s\"\n", dest5);
	printf("ft_memccpy(dest, \"%s\", 110, %zu) : \"%s\"\n", src, n, (char *)ft_memccpy(dest6, src, 110, n));
	printf("dest = \"%s\"\n", dest6);
	return (0);
}
