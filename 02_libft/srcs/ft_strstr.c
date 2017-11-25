/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:17:55 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/25 18:29:32 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"
/*
char	*strstr(const char *haystack, const char *needle)
{}
*/
int		main(void)
{
	char	*haystack;
	char	*needle;

	haystack = (char *)malloc(42);
	needle = (char *)malloc(42);
	strcpy(haystack, "bonbons");
	strcpy(needle, "a bon");
	printf("   strstr : \"%s\"\n",    strstr(haystack, needle));
	printf("haystack : %s\n", haystack);
	printf("  needle : %s\n", needle);
//	printf("ft_strstr : \"%s\"\n", ft_strstr(haystack, needle));
	return (0);
}
