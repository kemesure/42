/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 21:22:23 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/02 21:26:29 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int		main(void)
{
	int		c;

	c = 0;
	printf("int | tolower | ft_tolower\n");
	while (c <= 127)
	{
		printf("%d | %d | %d\n", c, tolower(c), ft_tolower(c));
		c++;
	}
}
