/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:00:46 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/14 17:21:33 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
	if (n == -2147483648 && (str = (char *)malloc(11)))
	{
		if (str == NULL)
			return (NULL);
		ft_strcpy(str, "-2147483648");
		return (str);
	}
	if (n < 0 && (sign = -1))
		n *= sign;
	if (n > 999999999)
		size = 10;
	else
		while (n / nb != 0 && ++size)
			nb *= 10;
	if (sign == -1)
		size++;
	if ((str = (char *)malloc(size + 1)) && str == NULL)
		return (NULL);
	if (sign == -1 && ++i)
		str[0] = '-';
	while (size > i && ++i)
		str[i - 1] = (n / ft_puiss(10, size - i)) % 10 + 48;
	str[i] = '\0';
	return (str);
}
