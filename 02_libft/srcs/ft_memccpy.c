/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 17:52:27 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/24 15:49:56 by kemesure         ###   ########.fr       */
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
	size_t	n1;
	size_t	n2;
	size_t	n3;

	dest = (char *)malloc(8);
	src  = "bonjour";
	n1 = 8;
	n2 = 6;
	n3 = 0;
	printf("   memccpy(dest, \"%s\",   0, %d) : \"%s\"\n", src, n1, (char *)   memccpy(dest, src,   0, n1));
	printf("ft_memccpy(dest, \"%s\",   0, %d) : \"%s\"\n", src, n1, (char *)ft_memccpy(dest, src,   0, n1));
	printf("   memccpy(dest, \"%s\",  62, %d) : \"%s\"\n", src, n1, (char *)   memccpy(dest, src,  62, n1));
	printf("ft_memccpy(dest, \"%s\",  62, %d) : \"%s\"\n", src, n1, (char *)ft_memccpy(dest, src,  62, n1));
	printf("   memccpy(dest, \"%s\", 110, %d) : \"%s\"\n", src, n1, (char *)   memccpy(dest, src, 110, n1));
	printf("ft_memccpy(dest, \"%s\", 110, %d) : \"%s\"\n", src, n1, (char *)ft_memccpy(dest, src, 110, n1));
	printf("   memccpy(dest, \"%s\", 106, %d) : \"%s\"\n", src, n1, (char *)   memccpy(dest, src, 106, n1));
	printf("ft_memccpy(dest, \"%s\", 106, %d) : \"%s\"\n", src, n1, (char *)ft_memccpy(dest, src, 106, n1));
	printf("\n");
	printf("   memccpy(dest, \"%s\",   0, %d) : \"%s\"\n", src, n2, (char *)   memccpy(dest, src,   0, n2));
	printf("ft_memccpy(dest, \"%s\",   0, %d) : \"%s\"\n", src, n2, (char *)ft_memccpy(dest, src,   0, n2));
	printf("   memccpy(dest, \"%s\",  62, %d) : \"%s\"\n", src, n2, (char *)   memccpy(dest, src,  62, n2));
	printf("ft_memccpy(dest, \"%s\",  62, %d) : \"%s\"\n", src, n2, (char *)ft_memccpy(dest, src,  62, n2));
	printf("   memccpy(dest, \"%s\", 110, %d) : \"%s\"\n", src, n2, (char *)   memccpy(dest, src, 110, n2));
	printf("ft_memccpy(dest, \"%s\", 110, %d) : \"%s\"\n", src, n2, (char *)ft_memccpy(dest, src, 110, n2));
	printf("   memccpy(dest, \"%s\", 106, %d) : \"%s\"\n", src, n2, (char *)   memccpy(dest, src, 106, n2));
	printf("ft_memccpy(dest, \"%s\", 106, %d) : \"%s\"\n", src, n2, (char *)ft_memccpy(dest, src, 106, n2));
	printf("\n");
	printf("   memccpy(dest, \"%s\",   0, %d) : \"%s\"\n", src, n3, (char *)   memccpy(dest, src,   0, n3));
	printf("ft_memccpy(dest, \"%s\",   0, %d) : \"%s\"\n", src, n3, (char *)ft_memccpy(dest, src,   0, n3));
	printf("   memccpy(dest, \"%s\",  62, %d) : \"%s\"\n", src, n3, (char *)   memccpy(dest, src,  62, n3));
	printf("ft_memccpy(dest, \"%s\",  62, %d) : \"%s\"\n", src, n3, (char *)ft_memccpy(dest, src,  62, n3));
	printf("   memccpy(dest, \"%s\", 110, %d) : \"%s\"\n", src, n3, (char *)   memccpy(dest, src, 110, n3));
	printf("ft_memccpy(dest, \"%s\", 110, %d) : \"%s\"\n", src, n3, (char *)ft_memccpy(dest, src, 110, n3));
	printf("   memccpy(dest, \"%s\", 106, %d) : \"%s\"\n", src, n3, (char *)   memccpy(dest, src, 106, n3));
	printf("ft_memccpy(dest, \"%s\", 106, %d) : \"%s\"\n", src, n3, (char *)ft_memccpy(dest, src, 106, n3));
	return (0);
}
