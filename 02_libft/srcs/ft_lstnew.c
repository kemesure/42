/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 23:26:12 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/08 17:23:09 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	Alloue (avec malloc(3)) et retourne un maillon “frais”. Les
**	champs content et content_size du nouveau maillon sont
**	initialisés par copie des paramètres de la fonction. Si le paramètre
**	content est nul, le champs content est initialisé à
**	NULL et le champs content_size est initialisé à 0 quelque
**	soit la valeur du paramètre content_size. Le champ next
**	est initialisé à NULL. Si l’allocation échoue, la fonction renvoie
**	NULL.
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	if (content == NULL)
	{
		new->content_size = 0;
		new->content = NULL;
	}
	else
	{
		new->content = malloc(content_size);
		if (new->content == NULL)
			return (NULL);
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
