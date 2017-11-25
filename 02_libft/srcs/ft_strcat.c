/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:12:07 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/25 17:52:20 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int		i;
	int		j;
	char	*ptr1;
	char	*ptr2;

	i = 0;
	j = 0;
	ptr1 = s1;
	ptr2 = (char *)s2;
	while (ptr1[i])
	{
		i++;
	}
	while (ptr2[j])
	{
		ptr1[i] = ptr2[j];
		i++;
		j++;
	}
	ptr1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char	*dst1;
	char	*dst2;
	char	*src;

	dst1 = malloc(42);
	dst2 = malloc(42);
	src = (char *)malloc(42);
	strcpy(src, "Bonjour");
	strcpy(dst1, "Salut");
	strcpy(dst2, "Salut");
	printf("   strcat : \"%s\"\n",    strcat(dst1, src));
	printf("      dst = \"%s\"\n", dst1);
	printf("ft_strcat : \"%s\"\n", ft_strcat(dst2, src));
	printf("      dst = \"%s\"\n", dst2);
	return (0);
}
