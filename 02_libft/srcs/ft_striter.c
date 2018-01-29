/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/22 13:46:01 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION :
**	Applique la fonction f à chaque caractère de la chaine de
**	caractères passée en paramètre. Chaque caractère est passé
**	par adresse à la fonction f afin de pouvoir être modifié si
**	nécéssaire.
**
**	Param. #1 La chaine de caractères sur laquelle itérer.
**
**	Param. #2 La fonction à appeler sur chaque caractère de s.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = -1;
	while (s[++i])
		f(&s[i]);
}
