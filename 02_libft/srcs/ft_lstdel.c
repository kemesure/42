/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 13:54:52 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/08 15:05:28 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Prend en paramètre l’adresse d’un pointeur sur un maillon et
**	libère la mémoire de ce maillon et celle de tous ses successeurs
**	l’un après l’autre avec del et free(3). Pour terminer,
**	le pointeur sur le premier maillon maintenant libéré doit être
**	mis à NULL (de manière similaire à la fonction ft_memdel de
**	la partie obligatoire).
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst == NULL)
		return ;
	while (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = (*alst)->next;
	}
	*alst = NULL;
}
