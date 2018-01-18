/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/18 14:47:27 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION :
**	Compare lexicographiquement s1 et s2 jusqu’à n caractères
**	maximum ou bien qu’un ’\0’ ait été rencontré. Si les deux
**	chaines sont égales, la fonction retourne 1, ou 0 sinon.
**
**	Param. #1 La première des deux chaines à comparer.
**	Param. #2 La seconde des deux chaines à comparer.
**	Param. #3 Le nombre de caractères à comparer au maximum.
**
**	RETURN VALUES :
**	1 ou 0 selon que les deux chaines sont égales ou non.
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i < n && s1[i] && s2[i])
		return (0);
	else
		return (1);
}
