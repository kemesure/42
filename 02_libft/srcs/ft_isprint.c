/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 20:39:27 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/02 21:06:24 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int		main(void)
{
	int		c;

	c = 0;
	printf("int | isprint | ft_isprint\n");
	while (c <= 127)
	{
		printf("%d | %d | %d\n", c, isprint(c), ft_isprint(c));
		c++;
	}
	return (0);
}
