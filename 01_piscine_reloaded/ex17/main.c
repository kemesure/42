/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:35:26 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/19 18:08:18 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = "bonjour";
	s2 = "bonbon";
	s3 = "42";
	s4 = "bonbons";
	printf("   strcmp de %s et %s = %d\n", s1, s2, strcmp(s1, s2));
	printf("ft_strcmp de %s et %s = %d\n\n", s1, s2, ft_strcmp(s1, s2));
	printf("   strcmp de %s et %s = %d\n", s3, s3, strcmp(s3, s3));
	printf("ft_strcmp de %s et %s = %d\n\n", s3, s3, ft_strcmp(s3, s3));
	printf("   strcmp de %s et %s = %d\n", s2, s4, strcmp(s2, s4));
	printf("ft_strcmp de %s et %s = %d\n", s2, s4, ft_strcmp(s2, s4));
	return (0);
}
