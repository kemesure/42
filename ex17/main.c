/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:35:26 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/12 14:22:20 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char *s1, *s2;
	s1 = "bonjour";
	s2 = "bonbon";
	printf("   strcmp de %s et %s = %d\n", s1, s2, strcmp(s1, s2));
	printf("ft_strcmp de %s et %s = %d\n", s1, s2, ft_strcmp(s1, s2));
	return 0;
}