/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:03:12 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/26 14:53:23 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	n2;

	ptr = s;
	n2 = n;
	while (n + 1 != 0)
	{
		if (n != n2)
			ptr[n] = 0;
		n--;
	}
}

int		main(void)
{
	char	*s1;
	char	*s2;
	size_t	n;

	s1 = (char *)malloc(42);
	s2 = (char *)malloc(42);
	n = 3;
	strcpy(s1, "bonjour");
	strcpy(s2, "bonjour");
	bzero(s1, n);
	printf("s(   bzero) = \"%s\"\n", s1 + n);
	ft_bzero(s2, n);
	printf("s(ft_bzero) = \"%s\"\n", s2 + n);
	return (0);
}
