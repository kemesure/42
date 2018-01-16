/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/14 15:25:36 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char		*ft_allocation(char const *s, size_t *i, size_t *j, size_t *len)
{
	char	*str;

	while (s[*j])
	{
		*len = *j;
		while (s[*len] != '\0' && s[*len] != ' ' &&
				s[*len] != '\n' && s[*len] != '\t')
			(*len)++;
		*j = *len;
		while (s[*j] == ' ' || s[*j] == '\n' || s[*j] == '\t')
			(*j)++;
	}
	str = (char *)malloc(*len - *i + 1);
	return (str);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return ("\0");
	j = i;
	str = ft_allocation(s, &i, &j, &len);
	if (str == NULL)
		return (NULL);
	j = 0;
	while (i + j < len)
	{
		str[j] = s[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
