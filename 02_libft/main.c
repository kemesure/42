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
/*
	void			test_ft_strnstr_same_ptr(void *ptr) {
	typeof(strnstr)	*ft_strnstr = ptr;

	SET_EXPLANATION("I'M HEEEEEEEEEERE 🌈")
	SANDBOX_RAISE(
			char	*s1 = "AAAAAAAAAAAAA";
			size_t	max = strlen(s1);

			char	*i1 = strnstr(s1, s1, max);
			char	*i2 = ft_strnstr(s1, s1, max);
			printf("\ni1=%s %p\ni2=%s %p\n", i1, i1, i2, i2);
			if (i1 == i2)
			{
				printf("x_x\n");
				exit(TEST_SUCCESS);
			}
			SET_DIFF(i1, i2);
			exit(TEST_FAILED);
			);
	}
*/
	char	*s1 = "AAAAAAAAAAAAA";
	size_t	max = strlen(s1);
	char	*i1 = strnstr(s1, s1, max);
	char	*i2 = ft_strnstr(s1, s1, max);

	printf("i1 = \"%s\"\n", i1);
	printf("i2 = \"%s\"\n", i2);
	if (i1 == i2)
		printf(":)\n");
	else
		printf(":(\n");

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
	if (*r == *ret)
		printf(":)\n");
	else
		printf(":(\n");



	printf("\n\n          END          END          END\n\n\n");

	return (0);
}
