/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 21:10:15 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/02 21:21:52 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int		main(void)
{
	int		c;

	c = 0;
	printf("int | toupper | ft_toupper\n");
	while (c <= 127)
	{
		printf("%d | %d | %d\n", c, toupper(c), ft_toupper(c));
		c++;
	}
}
