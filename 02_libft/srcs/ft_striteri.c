/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/19 16:28:13 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION :
**	Applique la fonction f à chaque caractère de la chaine de
**	caractères passée en paramètre en précisant son index en premier
**	argument. Chaque caractère est passé par adresse à la
**	fonction f afin de pouvoir être modifié si nécéssaire.
**
**	Param. #1 La chaine de caractères sur laquelle itérer.
**
**	Param. #2 La fonction à appeler sur chaque caractère de s et son index.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
