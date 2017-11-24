/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 16:03:19 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/24 19:33:29 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*ptr;

	i = 0;
	s = (char *)malloc(n);
	ptr = s;
	while (n + 1 != 0)
	{
		ptr[i] = c;
		n--;
	}
}

int		main(void)
{
	char	*s;

	s = (char *)malloc(42);
	strcpy(src, "bonjour");
	printf("   memset(\"bonjour\", 110, 4) : \"%s\"\n", s,    memset(s, 110, 4));
	printf("ft_memset(\"bonjour\", 110, 4) : \"%s\"\n", s, ft_memset(s, 110, 4));
	return (0);
}
