/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 12:31:17 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/02 13:45:09 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (ptr[i])
	{
		if (ptr[i] == c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char	*s;
	char	c;

	s = (char *)malloc(42);
	c = 'm';
	strcpy(s, "abcdefghijklmnopqrstuvwxyz mmm ...");
	printf("   strchr : %s\n",    strchr(s, c));
	printf("ft_strchr : %s\n", ft_strchr(s, c));
	return (0);
}
