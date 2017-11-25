/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:35:12 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/25 16:16:29 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;
	char	*ptr1;
	char	*ptr2;

	i = 0;
	ptr1 = dst;
	ptr2 = (char *)src;
	while (ptr2[i])
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	ptr1[i] = '\0';
	return (dst);
}

int		main(void)
{
	char	*dst1;
	char	*dst2;
	char	*src;

	dst1 = malloc(42);
	dst2 = malloc(42);
	src = (char *)malloc(42);
	strcpy(src, "bonjour");
	printf("   strcpy : \"%s\"\n",    strcpy(dst1, src));
	printf("      dst = \"%s\"\n", dst1);
	printf("ft_strcpy : \"%s\"\n", ft_strcpy(dst2, src));
	printf("      dst = \"%s\"\n", dst2);
	return (0);
}
