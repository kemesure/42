/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:04:28 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/21 09:42:37 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** RETIRER LES DEUX PREMIERS INCLUDES
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(*src));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	printf("   strdup : %s\n", strdup("Bonjour"));
	printf("ft_strdup : %s\n", ft_strdup("Bonjour"));
	return (0);
}