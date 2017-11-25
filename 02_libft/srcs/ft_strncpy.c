/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:53:37 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/25 17:03:58 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		i;
	char	*ptr1;
	char	*ptr2;

	i = 0;
	ptr1 = dst;
	ptr2 = (char *)src;
	while (ptr2[i] && len != 0)
	{
		ptr1[i] = ptr2[i];
		i++;
		len--;
	}
	ptr1[i] = '\0';
	return (dst);
}

int		main(void)
{
	char	*dst1;
	char	*dst2;
	char	*src;
	size_t	len;

	dst1 = malloc(42);
	dst2 = malloc(42);
	src = (char *)malloc(42);
	strcpy(src, "bonjour");
	len = 4;
	printf("   strncpy : \"%s\"\n",    strncpy(dst1, src, len));
	printf("       dst = \"%s\"\n", dst1);
	printf("ft_strncpy : \"%s\"\n", ft_strncpy(dst2, src, len));
	printf("       dst = \"%s\"\n", dst2);
	return (0);
}
