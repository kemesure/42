/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:36:54 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/26 15:47:06 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
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
	return (s1);
}

int		main(void)
{
	char	*dst1;
	char	*dst2;
	char	*src;
	size_t	n;

	dst1 = malloc(42);
	dst2 = malloc(42);
	src = (char *)malloc(42);
	n = 5;
	strcpy(src, "Bonjour");
	strcpy(dst1, "Salut");
	strcpy(dst2, "Salut");
	printf("   strncat : \"%s\"\n",    strncat(dst1, src, n));
	printf("       dst = \"%s\"\n", dst1);
	printf("ft_strncat : \"%s\"\n", ft_strncat(dst2, src, n));
	printf("       dst = \"%s\"\n", dst2);
	return (0);
}
