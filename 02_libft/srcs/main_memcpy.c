/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 11:37:31 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/19 02:10:59 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int		main()
{
	printf("   memcpy : \"%s\"\n", (char *)memcpy("bonjour", "bonjour", 42));
	printf("ft_memcpy : \"%s\"\n", (char *)ft_memcpy("bonjour", "bonjour", 42));
	return (0);
}
