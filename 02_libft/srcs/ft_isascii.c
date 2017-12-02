/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 20:31:12 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/02 20:50:04 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int		main(void)
{
	int		c;

	c = 0;
	while (c <= 127)
	{
		printf("   isascii(%c) : %d\n", c,    isascii(c));
		printf("ft_isascii(%c) : %d\n", c, ft_isascii(c));
		c++;
	}
	return (0);
}
