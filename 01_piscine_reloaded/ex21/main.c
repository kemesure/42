/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 16:19:13 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/19 18:17:54 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int		*tab;
	int		i;
	int		min;
	int		max;

	i = 0;
	min = 1;
	max = 43;
	tab = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
