/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 13:54:57 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/06 17:12:34 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh_lst;

	while (lst)
	{
		f(lst);
		fresh_lst = (t_list *)malloc(sizeof(lst));
		if (fresh_lst == NULL)
			return (NULL);
		if (lst->content == NULL)
		{
			fresh_lst->content = NULL;
			fresh_lst->content_size = 0; // doute
		}
		else
		{
			fresh_lst->content = malloc(lst->content_size);
			if ((void *)fresh_lst->content == NULL)
				return (NULL);
			fresh_lst->content_size = (size_t)malloc(lst->content_size);
			if ((void *)fresh_lst->content_size == NULL)
				return (NULL);
			fresh_lst->next = (t_list *)malloc(sizeof(lst->next));
			if (fresh_lst->next == NULL)
				return (NULL);
		}
		lst = lst->next;
	}
	return (fresh_lst);
}
