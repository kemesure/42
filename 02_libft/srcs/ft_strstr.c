/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:17:55 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/03 16:13:06 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
