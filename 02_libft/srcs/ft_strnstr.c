/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 14:01:09 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/17 21:03:56 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (s2[0] == '\0')
		return (s1);
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
