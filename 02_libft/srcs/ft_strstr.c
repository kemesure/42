/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:17:55 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/22 13:46:19 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION :
**	The strstr() function locates the first occurrence of the null-terminated
**	string needle in the null-terminated string haystack.
**
**	RETURN VALUES :
**	If needle is an empty string, haystack is returned;
**	if needle occurs nowhere in haystack, NULL is returned;
**	otherwise a pointer to the first character of the first occurrence of
**	needle is returned.
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*s1;
	char	*s2;
	int		i;
	int		j;

	s1 = (char *)haystack;
	s2 = (char *)needle;
	i = -1;
	while (s1[++i] || !s2[0])
	{
		j = -1;
		while (!s2[++j] || s1[i + j] == s2[j])
			if (!s2[j])
				return (s1 + i);
	}
	return (NULL);
}
