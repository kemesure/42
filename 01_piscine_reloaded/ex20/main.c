/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 18:10:43 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/19 18:15:01 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main(void)
{
	printf("   strdup : %s\n", strdup("Bonjour"));
	printf("ft_strdup : %s\n", ft_strdup("Bonjour"));
	return (0);
}
