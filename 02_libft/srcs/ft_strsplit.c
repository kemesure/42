/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/29 17:38:21 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
// s = "      split       this for   me  !       ", c = ' ', **tab = NULL, *nul = 0
//     "01234567890123456789012345678901234567890"
//     "0         1         2         3         4"
void	ft_allocation(char const *s, char c, char **tab, int *nul)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[j]) // V s[j] = " for   me  !       "
	{
		while (s[j] && s[j] == c) // F s[j] = "for   me  !       "
			j++; // j = 27
		len = j; // len = 27
		while (s[len] && s[len] != c) // F s[len] = "   me  !       "
			len++; // len = 30
		if (len != j) // V 30 != 27
		{
			tab[i] = (char *)malloc(len - j);
			// tab[0] = 6 octets	(pour "split\0")
			// tab[1] = 5 octets	(pour "this\0")
			// tab[2] = 3 octets	(pour "for\0")
			// tab[3] =  octets	(pour "me\0")
			// tab[4] =  octets	(pour "!\0")
			if (tab[i] == NULL) // F
			{
				*nul = 1;
				return ;
			}
		}
		i++; // i = 2
		if (s[len] != '\0') // s[len] = " for   me  !       "
			j = len; // j = 26
		else
			j = len - 1;
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
// s = "      split       this for   me  !       ", c = ' '
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
