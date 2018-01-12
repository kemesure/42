/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 14:34:33 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/02 15:32:53 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	printf(" _________________________________________________\n");
	printf("|                 DERNIERS  TESTS                 |\n");
	printf("|_________________________________________________|\n\n\n");
	/*
	**	STRNSTR
	*/
	printf("--------------------------------------------STRNSTR\n");

	char	*s1 = "oh no not the empty string !";
	char	*s2 = "";
	size_t	max = strlen(s1);
	char	*i1 = strnstr(s1, s2, max);
	char	*i2 = ft_strnstr(s1, s2, max);

	if (i1 == i2)
		printf(":)\n");
	else
	{
		printf("   strnstr(\"oh no not the empty string !\", \"\", %zu) = \"%s\"\n", max, i1);
		printf("ft_strnstr(\"oh no not the empty string !\", \"\", %zu) = \"%s\"\n", max, i2);
		printf("s1(\"oh no not the empty string !\") = \"%s\"\n", s1);
		printf("s2(\"\") = \"%s\"\n", s2);
	}

	/*
	**	STRSPLIT
	*/
	printf("-------------------------------------------STRSPLIT\n");

	char	*s = "      split       this for   me  !       ";
	char	**r = ft_strsplit(s, ' ');
	char	**ret = (char*[6]){"split", "this", "for", "me", "!", NULL};

	while (*r)
	{
		if (ft_strcmp(*r, *ret))
		{
			printf(":(\n");
			printf("r   = \"%s\"\n", *r);
			printf("ret = \"%s\"\n", *ret);
		}
		else
			printf(":)\n");
		r++;
		ret++;
	}
	printf("r   = \"%s\"\n", *r);
	printf("ret = \"%s\"\n", *ret);



	printf("\n\n          END          END          END\n\n\n");

	return (0);
}
