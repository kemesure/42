/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 11:37:29 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/24 14:44:45 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*ptr1;
	char	*ptr2;

	if (src == dest)
		return (dest);
	i = 0;
	ptr1 = dest;
	ptr2 = (char *)src;
	while (n)
	{
		ptr1[i] = ptr2[i];
		i++;
		n--;
	}
	return (dest);
}

int		main(void)
{
	char	*dest;
	char	*src;
	size_t	n0;
	size_t	n1;
	size_t	n2;
	size_t	n3;
	size_t	n4;
	size_t	n5;
	size_t	n6;
	size_t	n7;
	size_t	n8;
	size_t	n9;

	dest = (char *)malloc(8);
	src  = "bonjour";
	n0 = 0;
	n1 = 1;
	n2 = 2;
	n3 = 3;
	n4 = 4;
	n5 = 5;
	n6 = 6;
	n7 = 7;
	n8 = 8;
	n9 = 9;
	printf("   memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n0, (char *)   memcpy(dest, src, n0));
	printf("ft_memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n0, (char *)ft_memcpy(dest, src, n0));
	printf("\n");
	printf("   memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n1, (char *)   memcpy(dest, src, n1));
	printf("ft_memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n1, (char *)ft_memcpy(dest, src, n1));
	printf("\n");
	printf("   memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n2, (char *)   memcpy(dest, src, n2));
	printf("ft_memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n2, (char *)ft_memcpy(dest, src, n2));
	printf("\n");
	printf("   memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n3, (char *)   memcpy(dest, src, n3));
	printf("ft_memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n3, (char *)ft_memcpy(dest, src, n3));
	printf("\n");
	printf("   memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n4, (char *)   memcpy(dest, src, n4));
	printf("ft_memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n4, (char *)ft_memcpy(dest, src, n4));
	printf("\n");
	printf("   memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n5, (char *)   memcpy(dest, src, n5));
	printf("ft_memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n5, (char *)ft_memcpy(dest, src, n5));
	printf("\n");
	printf("   memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n6, (char *)   memcpy(dest, src, n6));
	printf("ft_memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n6, (char *)ft_memcpy(dest, src, n6));
	printf("\n");
	printf("   memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n7, (char *)   memcpy(dest, src, n7));
	printf("ft_memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n7, (char *)ft_memcpy(dest, src, n7));
	printf("\n");
	printf("   memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n8, (char *)   memcpy(dest, src, n8));
	printf("ft_memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n8, (char *)ft_memcpy(dest, src, n8));
	printf("\n");
	printf("   memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n9, (char *)   memcpy(dest, src, n9));
	printf("ft_memcpy(dest, \"%s\", %d) : \"%s\"\n", src, n9, (char *)ft_memcpy(dest, src, n9));
	return (0);
}
