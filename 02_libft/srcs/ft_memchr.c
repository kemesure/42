/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 14:44:08 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/25 15:11:00 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (ptr[i] && n != 0)
	{
		if (ptr[i] == c)
			return (ptr + i);
		i++;
		n--;
	}
	return (NULL);
}

int		main(void)
{
	char	*s1;
	char	*s2;
	int		c;
	size_t	n;

	s1 = (char *)malloc(42);
	s2 = (char *)malloc(42);
	c = 'n';
	n = 3;
	strcpy(s1, "bonjour");
	strcpy(s2, "bonjour");
	printf("   memchr : \"%s\"\n", (char *)   memchr(s1, c, n));
	printf("        s = \"%s\"\n", s1);
	printf("ft_memchr : \"%s\"\n", (char *)ft_memchr(s2, c, n));
	printf("        s = \"%s\"\n", s2);
	return (0);
}