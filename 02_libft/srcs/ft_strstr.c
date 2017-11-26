/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:17:55 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/26 16:51:43 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*s1;
	char	*s2;
	int		i;

	s1 = (char *)haystack;
	s2 = (char *)needle;
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (ft_strcmp(s1, s2) == 0 || (s1[i] && s1[i - 1] == s2[i - 1]))
		return (s1);
	return (NULL);
}

int		main(void)
{
	char	*haystack;
	char	*needle;

	haystack = (char *)malloc(42);
	needle = (char *)malloc(42);
	strcpy(haystack, "bonjour");
	strcpy(needle, "bonbons");
	printf(" haystack = \"%s\"\n", haystack);
	printf("   needle = \"%s\"\n", needle);
	printf("\n");
	printf("   strstr : \"%s\"\n",    strstr(haystack, needle));
	printf("ft_strstr : \"%s\"\n", ft_strstr(haystack, needle));
	return (0);
}
