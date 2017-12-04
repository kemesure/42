/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:12:07 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/03 16:02:04 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int		i;
	int		j;
	char	*ptr1;
	char	*ptr2;

	i = 0;
	j = 0;
	ptr1 = s1;
	ptr2 = (char *)s2;
	while (ptr1[i])
	{
		i++;
	}
	while (ptr2[j])
	{
		ptr1[i] = ptr2[j];
		i++;
		j++;
	}
	ptr1[i] = '\0';
	return (s1);
}
