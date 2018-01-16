/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 14:44:13 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/16 17:58:40 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	printf(" __________________________________________________\n");
	printf("|                    MORE TESTS                    |\n");
	printf("|__________________________________________________|\n\n\n");
	/*
		MEMCHR
	*/
	printf("----------------------------------------------MEMCHR\n");
	char			ctab[11];
	int				itab[11];
	unsigned long	ltab[11];
	size_t			j;
	int				i;

	i = -300;
	ft_memchr(NULL, 0, 0);
	while (i < 300)
	{
		j = 0;
		while (j < 11)
		{
			ctab[j] = (char)rand();
			itab[j] = rand();
			ltab[j] = (unsigned long)rand() * 10000;
			j++;
		}
		if ((memchr(ctab, i, sizeof(ctab)) != ft_memchr(ctab, i, sizeof(ctab)))
			|| ((memchr(itab, i, sizeof(itab)) != ft_memchr(itab, i, sizeof(itab))))
			|| (memchr(ltab, i, sizeof(ltab)) != ft_memchr(ltab, i, sizeof(ltab))))
		{
			printf(":(\n");				// J'ai modifier
			break;
		}
		++i;
	}
	printf("Si pas de :(, c'est GOOD :)\n\n");


	/*
		STRNSTR
	*/
	printf("---------------------------------------------STRNSTR\n");
	printf("------------------- TEST1 -------------------\n");
	char	buf[11];

	ft_bzero(buf, 11);
	ft_strcpy(buf, "un deux 9");
	buf[9] = '6'; // buf = "un deux 96"
	if (strnstr(buf, "6", 10) == ft_strnstr(buf, "6", 10))
		printf(":)\n");
	else
	{
		printf(":(\n");
		printf("ft_strnstr(\"%s\", \"6\", 10) = \"%s\"\n", buf, ft_strnstr(buf, "6", 10));
		printf("   strnstr(\"%s\", \"6\", 10) = \"%s\"\n", buf,    strnstr(buf, "6", 10));
	}
	printf("------------------- TEST2 -------------------\n");
	char	*buf2 = "ozarabozaraboze123";

	if (ft_strnstr(buf2, "ozaraboze", 15) == strnstr(buf2, "ozaraboze", 15))
		printf(":)\n");
	else
	{
		printf(":(\n");
		printf("ft_strnstr(\"%s\", \"ozaraboze\", 15) = \"%s\"\n", buf2, ft_strnstr(buf2, "ozaraboze", 15));
		printf("   strnstr(\"%s\", \"ozaraboze\", 15) = \"%s\"\n", buf2,    strnstr(buf2, "ozaraboze", 15));

	}
	printf("------------------- TEST3 -------------------\n");
	char	buf3[10];

	ft_bzero(buf3, 10);
	ft_strcpy(buf3, "un deux 9"); // buf3 = "un deux 9"
	if (strnstr(buf3, "9", 3) == ft_strnstr(buf3, "9", 3))
		printf(":)\n");
	else
	{
		printf(":(\n");
		printf("ft_strnstr(\"%s\", \"9\", 3) = \"%s\"\n", buf3, ft_strnstr(buf3, "9", 3));
		printf("   strnstr(\"%s\", \"9\", 3) = \"%s\"\n", buf3,    strnstr(buf3, "9", 3));
	}
	printf("------------------- TEST4 -------------------\n");
	char	buf4[10];

	ft_bzero(buf4, 10);
	ft_strcpy(buf4, "un deux 9");
	if (ft_strnstr(buf4, "deux", 5) == strnstr(buf4, "deux", 5))
		printf(":)\n\n");
	else
	{
		printf(":(\n");
		printf("ft_strnstr(\"%s\", \"deux\", 5) = \"%s\"\n", buf4, ft_strnstr(buf4, "deux", 5));
		printf("   strnstr(\"%s\", \"deux\", 5) = \"%s\"\n\n", buf4,    strnstr(buf4, "deux", 5));
	}


	/*
		PUTNBR
	*/
	printf("----------------------------------------------PUTNBR\n");
	int		out;
	int		p[2];
	char	buf5[100];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putnbr(0);
	ft_putnbr(1);
	ft_putnbr(-1);
	ft_putnbr(12300);
	ft_putnbr(10203);
	ft_putnbr(-56);
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
	dup2(out, 1);
	buf5[read(p[0], buf5, 100)] = 0;
	close(p[0]);
	close(p[1]);
	close(out);
	if (strcmp(buf5, "01-11230010203-562147483647-2147483648") == 0)
		printf(":)\n");
	else
	{
		printf(":(\n");
		printf("ft_putnbr :\n0\n1\n-1\n12300\n10203\n-56\n2147483647\n-2147483648\n\n");
		printf("   putnbr :\n%s\n", buf5);
	}


	/*
		PUTNBR_FD
	*/
	printf("-------------------------------------------PUTNBR_FD\n");


	/*
		STRNEQU
	*/
	printf("---------------------------------------------STRNEQU\n");


	/*
		LSTADD
	*/
	printf("----------------------------------------------LSTADD\n");



	printf("\n END\t\t\tEND\t\t\tEND\n\n");
	return (0);
}
