/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/17 19:03:08 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
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
	while (s[j])
	{
		len = j;
		while (((j = len) || !(j = len)) && s[len] != '\0' && s[len] != ' '
				&& s[len] != '\n' && s[len] != '\t')
			len++;
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j++;
	}
	str = (char *)malloc(len - i + 1);
	if (str == NULL)
		return (NULL);
	j = -1;
	while (i + ++j < len)
		str[j] = s[i + j];
	str[j] = '\0';
	return (str);
}
