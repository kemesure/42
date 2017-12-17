/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/17 19:04:41 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;
	char	**tab;

	if (s == NULL)
		return (NULL);
	tab = (void *)0;
	i = 0;
	j = 0;
	k = 0;
	while (s[k])
	{
		while (s[k] && s[k] == c)
			k++;
		len = k;
		while (s[len] && s[len] != c)
			len++;
		if (s[len])
		{
			tab[i] = (char *)malloc(len - k + 1);
			if (tab[i] == NULL)
				return (NULL);
		}
		i++;
		k = len;
	}
	k = 0;
	while (s[k])
	{
		while (s[k] && s[k] == c)
			k++;
		i = 0;
		while (s[k] && s[k] != c)
		{
			tab[j][i] = s[k];
			i++;
			k++;
		}
		if (s[k])
			tab[j][k] = '\0';
		j++;
	}
	return (tab);
}
