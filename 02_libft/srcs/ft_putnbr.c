/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/18 14:50:53 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	str[11];
	int		nb;
	int		i;
	int		j;

	j = 0;
	if ((i = -1) && n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0 && (n = -n))
		ft_putchar('-');
	else if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	nb = n;
	while (nb != 0 && ++j)
		nb /= 10;
	while (++i < j)
		str[j - 1 - i] = (n / ft_puiss(10, i)) % 10 + '0';
	str[j] = '\0';
	ft_putstr(str);
}
