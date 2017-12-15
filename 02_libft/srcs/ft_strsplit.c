/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/15 16:15:00 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	**ft_strsplit(char const *s, char c) // s = "a" c = '*'
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;
	char	**tab = NULL;

	i = 0;
	j = 0;
	k = 0;
	while (s[k]) // FAUX s[1] = '\0'
	{
		while (s[k] && s[k] == c) // FAUX s[0] = 'a'
			k++;
		len = k; // len = 0
		while (s[len] && s[len] != c) // VRAI s[0] = 'a'
			len++; // len = 1
		if (s[len]) // VRAI s[1] = 'a'
		{
			tab[i] = (char *)malloc(len - k + 1); // allocation de 2 octets
			if (tab[i] == NULL) // FAUX
				return (NULL);
		}
		i++; // i = 1
		k = len; // k = 1
	}
	k = 0;
	while (s[k]) // FAUX s[1] = '\0'
	{
		while (s[k] && s[k] == c) // FAUX s[0] = 'a'
			k++;
		i = 0;
		while (s[k] && s[k] != c) // VRAI s[0] = 'a'
		{
			tab[j][i] = s[k];
			// tab [0][0] = 'a'
			i++; // i = 1
			k++; // k = 1
		}
		if (s[k]) // FAUX s[1] = '\0'
			tab[j][k] = '\0';
			// tab [0] = "salut\0"
		j++; // j = 4
	}
	return (tab);
}
