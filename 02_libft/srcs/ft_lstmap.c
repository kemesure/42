/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 13:54:57 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/22 13:45:36 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Parcourt la liste lst en appliquant à chaque maillon la fonction
**	f et crée une nouvelle liste “fraiche” avec malloc(3) ré-
**	sultant des applications successives. Si une allocation échoue,
**	la fonction renvoie NULL.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh_lst;
	t_list	*tmp;
	t_list	*end;
	t_list	*start;

	end = NULL;
	while (lst)
	{
		tmp = f(lst);
		fresh_lst = (t_list *)ft_lstnew(tmp->content, tmp->content_size);
		if (fresh_lst == NULL)
			return (NULL);
		if (end == NULL && (end = fresh_lst))
			start = fresh_lst;
		else
		{
			end->next = fresh_lst;
			end = end->next;
		}
		lst = lst->next;
		fresh_lst = fresh_lst->next;
	}
	return (start);
}
