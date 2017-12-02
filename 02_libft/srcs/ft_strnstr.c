/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 14:01:09 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/02 16:08:16 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*s1;
	char	*s2;
	int		i;
	int		j;

	s1 = (char *)haystack;
	s2 = (char *)needle;
	i = 0;
	while ((s1[i] || !s2[0]) && len)
	{
		j = 0;
		if ((s1[i + j] == s2[j] || !s2[j]) && len)
			while ((s1[i + j] == s2[j] || !s2[j]) && len)
			{
				if (!s2[j])
					return (s1 + i);
				j++;
				len--;
			}
		else
			len--;
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;
	size_t	n;

	n = 4;
	s1 = (char *)malloc(42);
	s2 = (char *)malloc(42);
	s3 = (char *)malloc(42);
	s4 = (char *)malloc(0);
	s5 = (char *)malloc(42);
	strcpy(s1, "bonjour");
	strcpy(s2, "bon");
	strcpy(s3, "nj");
	strcpy(s5, "o");
	printf("   strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s1, s2, n,    strnstr(s1, s2, n));
	printf("ft_strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s1, s2, n, ft_strnstr(s1, s2, n));
	printf("\n");
	printf("   strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s1, s3, n,    strnstr(s1, s3, n));
	printf("ft_strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s1, s3, n, ft_strnstr(s1, s3, n));
	printf("\n");
	printf("   strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s1, s5, n,    strnstr(s1, s5, n));
	printf("ft_strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s1, s5, n, ft_strnstr(s1, s5, n));
	printf("\n");
	printf("   strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s2, s5, n,    strnstr(s2, s5, n));
	printf("ft_strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s2, s5, n, ft_strnstr(s2, s5, n));
	printf("\n");
	printf("   strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s3, s4, n,    strnstr(s3, s4, n));
	printf("ft_strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s3, s4, n, ft_strnstr(s3, s4, n));
	printf("\n");
	printf("   strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s5, s4, n,    strnstr(s5, s4, n));
	printf("ft_strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s5, s4, n, ft_strnstr(s5, s4, n));
	return (0);
}