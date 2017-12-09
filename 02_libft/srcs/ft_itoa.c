/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:00:46 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/09 01:22:06 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_puiss(int nb, int puiss)
{
	int		nb2;

	nb2 = nb;
	if (puiss == 0)
		return (1);
	while (puiss != 0)
	{
		nb *= nb2;
		puiss--;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nb;
	int		size;
	int		sign;
	int		i;

	nb = 1;
	size = 0;
	sign = 1;
	i = 0;
	if (n < 0)
	{
		sign = -1;
		n *= sign;
		size++;
	}
	while (n / nb != 0)
	{
		nb *= 10;
		size++;
	}
	str = (char *)malloc(size);
	if (sign == -1)
	{
		str[0] = '-';
		i++;
		size--;
	}
	while (size-- >= 0)
	{
		str[i] = (n / ft_puiss(10, size)) % 10 + 48;
		i++;
	}
	str[i] = '\0';
	return (str);
}
