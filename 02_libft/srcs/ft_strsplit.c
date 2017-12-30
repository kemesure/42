/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/30 16:11:28 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
// s = "      split       this for   me  !       ", c = ' ', **tab = NULL, *nul = 0
//     "01234567890123456789012345678901234567890"
//     "0         1         2         3         4"
// -----------------------------
#include <stdio.h> // A RETIRER
// -----------------------------
void	ft_allocation(char const *s, char c, char **tab, int *nul)
{
	printf("\tFT_ALLOCATION (debut)\n");
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;

	i = 0;
	j = 0;
	k = 0;
	// ALLOCATION NOMBRE DE MOTS
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
	printf("\t\tk = %zu\n", k);
	tab = (char **)malloc(k + 1);
	j = 0;
	// ALLOCATION TAILLE DES MOTS
	while (s[j]) // s[j] = s[41] = '\0' --> FAUX
	{
		printf("\t\twhile (s[%zu])\n", j);
		while (s[j] && s[j] == c) // s[j] = s[41] = '\0' != c
		{
			printf("\t\t\twhile (s[%zu] && s[%zu] == '%c')\n", j, j, c);
			printf("\t\t\t\ts[%zu] = '%c'\n", j, c);
			j++; // j = 41
		}
		printf("\n\n");
		len = j; // len = 41
		while (s[len] && s[len] != c) // s[len] = s[41] != c mais s[41] = '\0'
		{
			printf("\t\t\twhile (s[%zu] && s[%zu] != '%c')\n", len, len, c);
			printf("\t\t\t\ts[%zu] = '%c'\n", len, s[len]);
			len++; // len = 34
		}
		printf("\n\n");
		if (len != j) // 41 = 41
		{
			printf("\t\t\tif (%zu != %zu)\n", len, j);
			tab[i] = (char *)malloc(len - j + 1);
			// tab[0] = 11 -  6 + 1 = 6 octets	(pour "split\0")
			// tab[1] = 22 - 18 + 1 = 5 octets	(pour "this\0")
			// tab[2] = 26 - 23 + 1 = 4 octets	(pour "for\0")
			// tab[3] = 31 - 29 + 1 = 3 octets	(pour "me\0")
			// tab[4] = 34 - 33 + 1 = 2 octets	(pour "!\0")
			printf("\t\t\t\ttab[%zu] = %zu octets\n", i, len - j + 1);
			if (tab[i] == NULL)
			{
				*nul = 1;
				return ;
			}
		}
		i++; // i = 6
		j = len; // j = 41
	}
	printf("\tFT_ALLOCATION (fin)\n");
}

// s = "      split       this for   me  !       ", c = ' ', **tab = NULL, *nul = 0
//     "01234567890123456789012345678901234567890"
//     "0         1         2         3         4"
void	ft_assignment(char const *s, char c, char **tab)
{
	printf("\tFT_ASSIGNMENT (debut)\n");
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (s[k]) // s[k] = s[41] = '\0'
	{
		while (s[k] && s[k] == c) // s[k] = s[40] = '\0'
			k++; // k = 41
		i = 0;
		while (s[k + i] && s[k + i] != c) // s[k + i] = s[41 + 0] = '\0'
		{
			tab[j][i] = s[k + i]; // tab[j][i] = tab[4][0] = s[k + i] = s[33 + 0] = '!'
			i++; // i = 1
		}
		if (i) // i = 0 donc FAUX
			tab[j][k + i] = '\0';
		k += i; // k = 41 + 0 = 41
		j++; // j = 6
	}
	printf("\tFT_ASSIGNMENT (fin)\n");
}
// s = "      split       this for   me  !       ", c = ' '
char	**ft_strsplit(char const *s, char c)
{
	printf("FT_STRSPLIT (debut)\n");
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
	printf("FT_STRSPLIT (fin)\n");
	return (tab);
}
