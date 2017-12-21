/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/21 13:49:12 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	if (s == NULL)
		return (NULL);
	str = (void *)0;
	i = 0;
	str = malloc(ft_strlen(s + start) - ft_strlen(s + len) + 1);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[ft_strlen(s + start) + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
