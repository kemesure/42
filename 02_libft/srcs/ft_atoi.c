/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:31:05 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/18 19:56:13 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int			i;
	int			puiss;
	int			sign;
	long		nb;

	i = 0;
	nb = 0;
	sign = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		sign = 44 - str[i++];
	puiss = i;
	while (str[puiss] >= '0' && str[puiss] <= '9')
		puiss++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb += (str[i] - 48) * ft_puiss(10, puiss - i - 1);
		i++;
	}
	return ((int)nb * sign);
}
