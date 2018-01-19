/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 15:34:53 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/18 16:19:49 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	ft_putstr(" __________________________________________________\n");
	ft_putstr("|                     PARTIE 3                     |\n");
	ft_putstr("|__________________________________________________|\n\n\n");
	/*
		ft_lstnew
	*/
	printf("----------------------------------------LSTNEW\n");
/*
	void			test_ft_lstnew_free(void *ptr) {
	t_list	*(*ft_lstnew)(const void *, size_t) = ptr;
	SET_EXPLANATION("your lstnew does not allocate memory");

	SANDBOX_RAISE(
			char	*data = "hello, i'm a data";
			t_list	*l = ft_lstnew(data, strlen(data) + 1);

			if (!strcmp(data, l->content)) {
				free(l->content);
				free(l);
				exit(TEST_SUCCESS);
			}
			SET_DIFF(data, l->content);
			exit(TEST_FAILED);
			);
	}
*/
	char	*data = "hello, i'm a data";
	t_list	*l = ft_lstnew(data, strlen(data) + 1);

	if (!strcmp(data, l->content))
		printf(":)\n");
	else
		printf("data = \"%s\"\nl->content = \"%s\"\n", data, l->content);

/*
**
*/
	char	*data2 = "hello, i'm a data";
	t_list	*l2 = ft_lstnew(data2, strlen(data2) + 1);

	if (!strcmp(data2, l2->content))
		printf(":)\n");
	else
		printf("data = \"%s\"\nl->content = \"%s\"\n", data2, l2->content);

	/*
		ft_lstdelone
	*/
	printf("-------------------------------------LSTDELONE\n");
	/*
		ft_lstdel
	*/
	printf("----------------------------------------LSTDEL\n");
	/*
		ft_lstadd
	*/
	printf("----------------------------------------LSTADD\n");
	/*
		ft_lstiter
	*/
	printf("---------------------------------------LSTITER\n");
	/*
		ft_lstmap
	*/
	printf("----------------------------------------LSTMAP\n");


	return (0);
}
