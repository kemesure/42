/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 13:54:57 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/08 17:11:52 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	Parcourt la liste lst en appliquant à chaque maillon la fonction
**	f et crée une nouvelle liste “fraiche” avec malloc(3) ré-
**	sultant des applications successives. Si une allocation échoue,
**	la fonction renvoie NULL.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh_lst;
	t_list	*end;
	t_list	*start;

	end = NULL;
	while (lst)
	{
		fresh_lst = f(lst);
		if (fresh_lst == NULL)
			return (NULL);
		if (end == NULL)
		{
			end = fresh_lst;
			start = fresh_lst;
		}
		else
		{
			end->next = fresh_lst;
			end = end->next;
		}
		lst = lst->next;
	}
	return (start);
}

/*
			struct my_struct;
			t_struct *struct_ptr;

			ptr = &my_struct;

			my_struct.a;
			(*ptr).a;
			ptr->a;
*/
