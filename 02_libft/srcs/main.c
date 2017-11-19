/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 11:37:31 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/19 14:42:54 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int		main()
{
	char	*src;

	src = malloc(8);
	printf("   memcpy : \"%s\"\n", (char *)memcpy("bonjou", "bonjour", 6));
	printf("ft_memcpy : \"%s\"\n", (char *)ft_memcpy("bonjou", "bonjour", 6));
	return (0);
}
