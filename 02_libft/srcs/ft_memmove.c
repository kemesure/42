/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:55:07 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/25 14:46:15 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = dst;
	ptr2 = (char *)src;
	while (len != 0)
	{
		ptr1[len - 1] = ptr2[len - 1];
		len--;
	}
	return (dst);
}

int		main(void)
{
	char	*dest1;
	char	*dest2;
	char	*src;
	size_t	len;

	dest1 = (char *)malloc(42);
	dest2 = (char *)malloc(42);
	src   = malloc(42);
	strcpy(src, "bonjour");
	len = 4;
	printf("   memmove : \"%s\"\n",    memmove(dest1, src, len));
	printf("      dest = \"%s\"\n", dest1);
	printf("ft_memmove : \"%s\"\n", ft_memmove(dest2, src, len));
	printf("      dest = \"%s\"\n", dest2);
	return 0;
}
