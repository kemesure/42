/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:11:54 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/25 15:33:29 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*ptr1;
	char	*ptr2;

	i = 0;
	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	while (ptr1[i] && ptr2[i] && n != 0)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
		n--;
	}
	return (0);
}

int		main(void)
{
	char	*s1;
	char	*s2;
	size_t	n;

	s1 = (char *)malloc(42);
	s2 = (char *)malloc(42);
	n = 4;
	strcpy(s1, "bonjour");
	strcpy(s2, "bonbons");
	printf("   memcmp : \"%d\"\n",    memcmp(s1, s2, n));
	printf("ft_memcmp : \"%d\"\n", ft_memcmp(s1, s2, n));
	return (0);
}