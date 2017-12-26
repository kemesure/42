/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/26 14:54:57 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_allocation(char const *s, char c, char **tab, int *nul)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		len = j;
		while (s[len] && s[len] != c)
			len++;
		if (len != j)
		{
			tab[i] = (char *)malloc(len - j + 1);
			if (tab[i] == NULL)
				*nul = 1;
		}
		i++;
		j = len;
	}
}

void	ft_assignment(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[k])
	{
		while (s[k] && s[k] == c)
			k++;
		i = 0;
		while (s[k + i] && s[k + i] != c)
		{
			tab[j][i] = s[k + i];
			i++;
		}
		if (i)
			tab[j][k] = '\0';
		k += i;
		j++;
	}
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		nul;

	nul = 0;
	if (s == NULL)
		return (NULL);
	tab = (void *)0;
	ft_allocation(s, c, tab, &nul);
	if (nul == 1)
		return (NULL);
	ft_assignment(s, c, tab);
	return (tab);
}
