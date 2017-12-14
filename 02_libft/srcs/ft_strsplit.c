/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/14 18:17:56 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	**ft_strsplit(char const *s, char c) // s = "*salut*les***etudiants*" c = '*'
{ //												"01234567890123456789012"
	size_t	i; //									"0         1         2  "
	size_t	j;
	size_t	k;
	size_t	len;
	char	**tab = NULL;

	i = 0;
	j = 0;
	k = 0;
	while (s[k]) // VRAI s[7] = 'l'
	{
		while (s[k] && s[k] == c) // FAUX s[7] = 'l'
			k++; // k = 1
		len = k; // len = 7
		while (s[len] && s[len] != c) // FAUX s[7] = '*'
			len++; // len = 10
		tab[i] = (char *)malloc(len - k + 1);
		// tab[0] = (char *)malloc(6)
		// tab[1] = (char *)malloc(4)
		if (tab[i] == NULL) // FAUX
			return (NULL);
		i++; // i = 2
		k += len; // k = 7 -> PROBLEME ICI
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
