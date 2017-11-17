/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:35:26 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/12 14:43:01 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char *s1, *s2, *s3, *s4, *s5, *s6;

	s1 = "bonjour";
	s2 = "bonbon";
	s3 = "42";
	s4 = "42";
	s5 = "bonbon";
	s6 = "bonbons";

	printf("   strcmp de %s et %s = %d\n", s1, s2, strcmp(s1, s2));
	printf("ft_strcmp de %s et %s = %d\n\n", s1, s2, ft_strcmp(s1, s2));

	printf("   strcmp de %s et %s = %d\n", s3, s4, strcmp(s3, s4));
	printf("ft_strcmp de %s et %s = %d\n\n", s3, s4, ft_strcmp(s3, s4));

	printf("   strcmp de %s et %s = %d\n", s5, s6, strcmp(s5, s6));
	printf("ft_strcmp de %s et %s = %d\n", s5, s6, ft_strcmp(s5, s6));

	return 0;
}