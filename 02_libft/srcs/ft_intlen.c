/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 13:44:13 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/14 13:45:15 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_intlen(int n, int *len, int *sign)
{
	if (n == -2147483648)
	{
		*len = 11;
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		*sign += 1;
	}
	if (n == 0)
		*len = 1;
	else if (n > 999999999)
		*len = 10;
	else
	{
		if (n / 10 != 0)
		{
			*len += 1;
			ft_intlen(n / 10, len, sign);
		}
	}
}
