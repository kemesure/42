/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/14 15:25:25 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_allocation_nb_word(char const *s, char c)
{
	size_t	j;
	size_t	k;
	size_t	len;
	char	**tab;

	j = 0;
	k = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		len = j;
		while (s[len] && s[len] != c)
			len++;
		if (len != j)
			k++;
		j = len;
	}
	tab = (char **)malloc(sizeof(char *) * (k + 1));
	if (tab == NULL)
		return (NULL);
	return (tab);
}

static char		**ft_allocation_size_of_word(char const *s, char c, char **tab)
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
				return (NULL);
			i++;
		}
		j = len;
	}
	tab[i] = NULL;
	return (tab);
}

static void		ft_assignment(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	j;
	size_t	k;

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
			tab[j++][i] = '\0';
		k += i;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;

	if (s == NULL)
		return (NULL);
	tab = ft_allocation_nb_word(s, c);
	if (tab == NULL)
		return (NULL);
	tab = ft_allocation_size_of_word(s, c, tab);
	if (tab == NULL)
		return (NULL);
	ft_assignment(s, c, tab);
	return (tab);
}
