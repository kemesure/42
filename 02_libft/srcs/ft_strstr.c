/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:17:55 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/02 14:01:33 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*s1;
	char	*s2;
	int		i;
	int		j;

	s1 = (char *)haystack;
	s2 = (char *)needle;
	i = 0;
	while (s1[i] || !s2[0])
	{
		j = 0;
		while (s1[i + j] == s2[j] || !s2[j])
		{
			if (!s2[j])
				return (s1 + i);
			j++;
		}
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

	s1 = (char *)malloc(42);
	s2 = (char *)malloc(42);
	s3 = (char *)malloc(42);
	s4 = (char *)malloc(0);
	s5 = (char *)malloc(42);
	strcpy(s1, "bonjour");
	strcpy(s2, "bonbon");
	strcpy(s3, "bon");
	strcpy(s5, "nb");
	printf("   strstr(\"%s\", \"%s\") : \"%s\"\n", s1, s2,    strstr(s1, s2));
	printf("ft_strstr(\"%s\", \"%s\") : \"%s\"\n", s1, s2, ft_strstr(s1, s2));
	printf("\n");
	printf("   strstr(\"%s\", \"%s\") : \"%s\"\n", s2, s1,    strstr(s2, s1));
	printf("ft_strstr(\"%s\", \"%s\") : \"%s\"\n", s2, s1, ft_strstr(s2, s1));
	printf("\n");
	printf("   strstr(\"%s\", \"%s\") : \"%s\"\n", s2, s3,    strstr(s2, s3));
	printf("ft_strstr(\"%s\", \"%s\") : \"%s\"\n", s2, s3, ft_strstr(s2, s3));
	printf("\n");
	printf("   strstr(\"%s\", \"%s\") : \"%s\"\n", s3, s2,    strstr(s3, s2));
	printf("ft_strstr(\"%s\", \"%s\") : \"%s\"\n", s3, s2, ft_strstr(s3, s2));
	printf("\n");
	printf("   strstr(\"%s\", \"%s\") : \"%s\"\n", s2, s5,    strstr(s2, s5));
	printf("ft_strstr(\"%s\", \"%s\") : \"%s\"\n", s2, s5, ft_strstr(s2, s5));
	printf("\n");
	printf("   strstr(\"%s\", \"%s\") : \"%s\"\n", s1, s4,    strstr(s1, s4));
	printf("ft_strstr(\"%s\", \"%s\") : \"%s\"\n", s1, s4, ft_strstr(s1, s4));
	printf("\n");
	return (0);
}
