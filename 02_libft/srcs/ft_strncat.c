/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:36:54 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/03 16:07:21 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int		i;
	int		j;
	char	*ptr1;
	char	*ptr2;

	i = 0;
	j = 0;
	n++;
	ptr1 = s1;
	ptr2 = (char *)s2;
	while (ptr1[i])
	{
		i++;
	}
	while (ptr2[j] && n - 1)
	{
		ptr1[i] = ptr2[j];
		i++;
		j++;
		n--;
	}
	ptr1[i] = '\0';
	return (s1);
}
