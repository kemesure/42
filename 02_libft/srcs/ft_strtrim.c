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

/* A RETIRER */
#include <stdio.h>
/* A RETIRER */

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
	printf("while 1\n");
	if (s[i] == '\0')
		return ("\0");
	j = i;
	while (s[j])
	{
		len = j;
		while ((j = len) && s[len] != '\0' && s[len] != ' '
				&& s[len] != '\n' && s[len] != '\t')
			len++;
		printf("while 2.1\n");
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j++;
		printf("while 2.2\n");
	}
	printf("while 2\n");
	str = (char *)malloc(len - i + 1);
	if (str == NULL)
		return (NULL);
	j = -1;
	while (i + ++j < len)
		str[j] = s[i + j];
	printf("while 3\n");
	str[j] = '\0';
	printf("end\n");
	return (str);
}
/*     A TESTER

        char *s1 = "Hello \t  Please\n Trim me !";
        char *s2 = "Hello \t  Please\n Trim me !";
        char *ret = ft_strtrim(s1);

        if (!strcmp(ret, s2))
                exit(TEST_SUCCESS);
        exit(TEST_FAILED);
*/