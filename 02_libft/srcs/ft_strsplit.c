/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/12 15:07:42 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;
	char	**tab = NULL;

	i = 0;
	j = 0;
	k = 0;
	while (s[k])
	{
		while (s[k] == c)
			k++;
		len = k;
		while (s[len] != c)
			len++;
		tab[i] = (char *)malloc(len - k);
		if (tab[i] == NULL)
			return (NULL);
		i++;
		k += len;
	}
	k = 0;
	while (s[k])
	{
		while (s[k] == c)
			k++;
		i = 0;
		while (s[k] && s[k] != c)
		{
			tab[j][i] = s[k];
			i++;
			k++;
		}
		j++;
	}
	return (tab);
}
