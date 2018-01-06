/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/02 15:32:34 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
// -----------------------------
#include <stdio.h> // A RETIRER
// -----------------------------

//
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
	while (s[j])
	{
		printf("\t\twhile (s[%zu])\n", j);
		while (s[j] && s[j] == c)
		{
			printf("\t\t\twhile (s[%zu] && s[%zu] == '%c')\n", j, j, c);
			printf("\t\t\t\ts[%zu] = '%c'\n", j, c);
			j++;
		}
		printf("\n\n");
		len = j;
		while (s[len] && s[len] != c)
		{
			printf("\t\t\twhile (s[%zu] && s[%zu] != '%c')\n", len, len, c);
			printf("\t\t\t\ts[%zu] = '%c'\n", len, s[len]);
			len++;
		}
		printf("\n\n");
		if (len != j)
		{
			printf("\t\t\tif (%zu != %zu)\n", len, j);
			tab[i] = (char *)malloc(len - j + 1);
			printf("\t\t\t\ttab[%zu] = %zu octets\n", i, len - j + 1);
			if (tab[i] == NULL)
			{
				*nul = 1;
				return ;
			}
		}
		i++;
		j = len;
	}
	printf("\tFT_ALLOCATION (fin)\n");
}

//
void	ft_assignment(char const *s, char c, char **tab)
{
	printf("\tFT_ASSIGNMENT (debut)\n");
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (s[k])
	{
		printf("\t\twhile (s[%zu])\n", k);
		while (s[k] && s[k] == c)
		{
			printf("\t\t\twhile (s[%zu] && s[%zu] == '%c')\n", k, k, c);
			k++;
		}
		i = 0;
		printf("\n\n");
		while (s[k + i] && s[k + i] != c)
		{
			printf("\t\t\twhile (s[%zu] && s[%zu] != %c)\n", k + i, k + i, c);
			printf("DEBUG : i = %zu, j = %zu, k = %zu\n", i, j, k);
			printf("tab[j][i] = s[k + i]   -->   SEGFAULT\n");
			tab[j][i] = s[k + i]; // SEGFAULT
			printf("\t\t\t\tASSIGNATION QUI POSE PROBLEME\n");
			i++;
		}
		if (i)
			tab[j][k + i] = '\0';
		k += i;
		j++;
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
