/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:54:57 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/26 16:04:39 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"
/*
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	int		i;
	int		j;
	char	*ptr1;
	char	*ptr2;

	i = 0;
	j = 0;
	n++;
	ptr1 = s1;
	ptr2 = (char *)s2;
	while (ptr1[i])
	{
		i++;
	}
	while (ptr2[j] && n - 1)
	{
		ptr1[i] = ptr2[j];
		i++;
		j++;
		n--;
	}
	ptr1[i] = '\0';
	return (size + strlen());
}
*/
int		main(void)
{
	char	*dst1;
//	char	*dst2;
	char	*src;
	size_t	size;

	dst1 = malloc(42);
//	dst2 = malloc(42);
	src = (char *)malloc(42);
	size = 3;
	strcpy(src, "Bonjour");
	strcpy(dst1, "Salut");
//	strcpy(dst2, "Salut");
	printf("   strlcat : \"%lu\"\n",    strlcat(dst1, src, size));
	printf("       dst = \"%s\"\n", dst1);
/*	printf("ft_strlcat : \"%lu\"\n", ft_strlcat(dst2, src, n));
	printf("       dst = \"%s\"\n", dst2);
*/	return (0);
}