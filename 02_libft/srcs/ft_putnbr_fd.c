/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/18 14:50:43 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str[11];
	int		nb;
	int		i;
	int		j;

	j = 0;
	if ((i = -1) && n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0 && (n = -n))
		ft_putchar_fd('-', fd);
	else if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	nb = n;
	while (nb != 0 && ++j)
		nb /= 10;
	while (++i < j)
		str[j - 1 - i] = (n / ft_puiss(10, i)) % 10 + '0';
	str[j] = '\0';
	ft_putstr_fd(str, fd);
}
