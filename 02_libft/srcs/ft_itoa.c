/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:00:46 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/30 16:16:40 by kemesure         ###   ########.fr       */
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

void	ft_itoa_assignment(int n, char *str, int sign, int len)
{
	int		i;

	i = 0;
	if (sign == 1)
	{
		str[i] = '-';
		n *= -1;
		i++;
		while (i <= len)
		{
			str[i] = (n / ft_puiss(10, len - i)) % 10 + '0';
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			str[i] = (n / ft_puiss(10, len - i - 1)) % 10 + '0';
			i++;
		}
	}
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	len = 1;
	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_intlen(n, &len, &sign);
	str = malloc(len + 1 + sign);
	if (str == NULL)
		return (NULL);
	ft_itoa_assignment(n, str, sign, len);
	return (str);
}
