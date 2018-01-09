/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 13:54:27 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/08 14:58:31 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	Prend en paramètre l’adresse d’un pointeur sur un maillon et
**	libère la mémoire du contenu de ce maillon avec la fonction
**	del passée en paramètre puis libère la mémoire du maillon
**	en lui même avec free(3). La mémoire du champ next ne
**	doit en aucun cas être libérée. Pour terminer, le pointeur sur
**	le maillon maintenant libéré doit être mis à NULL (de manière
**	similaire à la fonction ft_memdel de la partie obligatoire).
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst == NULL)
		return ;
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
