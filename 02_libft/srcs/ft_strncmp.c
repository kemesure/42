/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:10:45 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/02 16:29:59 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && n - 1)
	{
		n--;
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	size_t	n;

	s1 = "bonjour";
	s2 = "bonbon";
	s3 = "42";
	s4 = "bonbons";
	n = 6;
	printf("   strncmp(\"%s\", \"%s\", %zu) = %d\n",   s1, s2, n,    strncmp(s1, s2, n));
	printf("ft_strncmp(\"%s\", \"%s\", %zu) = %d\n\n", s1, s2, n, ft_strncmp(s1, s2, n));
	printf("   strncmp(\"%s\", \"%s\", %zu) = %d\n",   s3, s3, n,    strncmp(s3, s3, n));
	printf("ft_strncmp(\"%s\", \"%s\", %zu) = %d\n\n", s3, s3, n, ft_strncmp(s3, s3, n));
	printf("   strncmp(\"%s\", \"%s\", %zu) = %d\n",   s2, s4, n,    strncmp(s2, s4, n));
	printf("ft_strncmp(\"%s\", \"%s\", %zu) = %d\n",   s2, s4, n, ft_strncmp(s2, s4, n));
	return (0);
}
