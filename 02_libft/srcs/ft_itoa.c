/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:00:46 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/23 23:17:11 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_itoa(int n) // -2147483647
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
	if (n == -2147483648 && (str = (char *)malloc(11))) // FAUX
	{
		if (str == NULL)
			return (NULL);
		ft_strcpy(str, "-2147483648\0");
		return (str);
	}
	if (n < 0 && (sign = - 1)) // VRAI donc sign = - 1
		n *= sign; // n = 2147483647
	if (n > 999999999) // VRAI 2 147 483 647 > 999 999 999
		size = 10;
	else // FAUX
		while (n / nb != 0 && ++size)
			nb *= 10;
	if (sign == - 1) // VRAI sign = - 1
		size++; // size = 11
	if ((str = (char *)malloc(size + 1)) && str == NULL) // str = 12 octets && FAUX
		return (NULL);
	if (sign == - 1 && ++i) // VRAI et i = 1
		str[0] = '-';
	while (size > i && ++i) // FAUX 11 !> 11 (i = 11 c'est le while d'avant)
		str[i - 1] = (n / ft_puiss(10, size - i)) % 10 + 48; // str = "-2147483647"
	str[i] = '\0'; // str = "-2147483647\0"
	return (str);
}
