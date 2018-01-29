/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/22 13:46:00 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION :
**	Compare lexicographiquement s1 et s2. Si les deux chaines
**	sont égales, la fonction retourne 1, ou 0 sinon.
**
**	Param. #1 La première des deux chaines à comparer.
**
**	Param. #2 La seconde des deux chaines à comparer.
**
**	RETURN VALUE :
**	1 ou 0 selon que les deux chaines sont égales ou non.
*/

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;

	if (s1 == NULL && s2 == NULL)
		return (1);
	else if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	if (s1[i] == s2[i])
		return (1);
	else
		return (0);
}
