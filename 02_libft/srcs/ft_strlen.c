/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 15:35:40 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/21 09:34:49 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	RETIRER LE INCLUDE !!!
*/
#include <string.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(void)
{
	printf("   strlen : %d\n", strlen("bonjour\n"));
	printf("ft_strlen : %d\n", ft_strlen("bonjour\n"));
	return (0);
}
