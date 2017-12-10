/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/10 18:42:23 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s) // s = " \n  \t  4\n2  \t  \n " len = 17 (7+3+7)
{
	char	*str;
	size_t	i;
	size_t	len;
	size_t	start;

	i = 0;
	start = 0;
	len = ft_strlen(s); // = 17
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++; // = 7
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--; // = 10
	len -= start; // len = 10 - 7 = 3
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
