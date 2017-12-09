/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:00:46 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/09 14:29:44 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_itoa(int n) // n = 2 147 483 647
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
	if (n < 0) // FAUX n = 2 147 483 647
	{
		sign = -1;
		n *= sign;
		size++;
	}
	while (n / nb != 0) // VRAI 2 147 483 647 / ? = ?
	{
		nb *= 10; // nb = 1 000 000 000 * 10 = 10 000 000 000 PAS POSSIBLE TROP GRAND
		size++; // size = 10
	}
	str = (char *)malloc(size + 1); // str = 10 ou plus octets
	if (str == NULL)
		return (NULL);
	if (sign == -1) // FAUX
	{
		str[0] = '-';
		i++;
		size--;
	}
	while (--size >= 0)
	{
		str[i] = (n / ft_puiss(10, size)) % 10 + 48;
		i++;
	}
	str[i] = '\0';
	return (str);
}
