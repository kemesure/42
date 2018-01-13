/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:06:23 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/30 18:26:34 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	ft_putstr_fd(ft_itoa(n), fd); INTERDIT A CAUSE DU MALLOC DANS ITOA
*/

void	ft_putnbr_fd(int n, int fd)
{
	char	str[11];
	int		nb;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648\n", fd);
		return ;
	}
	if (n < 0 && (n = -n))
		ft_putchar_fd('-', fd);
	else if (n == 0 &&
			((int)(str[j - 1 - i] = (n / ft_puiss(10, i)) % 10 + '0')))
		return ;
	nb = n;
	while (nb != 0 && ++j)
		nb /= 10;
	while (++i < j)
		str[j - 1 - i] = (n / ft_puiss(10, i)) % 10 + '0';
	str[j] = '\0';
	ft_putstr_fd(str, fd);
	ft_putchar_fd('\n', fd);
}
