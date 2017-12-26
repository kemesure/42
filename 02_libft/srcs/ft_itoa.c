/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:00:46 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/26 15:54:31 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_intlen(int n, int *len, int *sign) // n = - 1 000 000 000, len = 1, sign = 0
{
	if (n == -2147483648)
	{
		*len = 11;
		return ;
	}
	if (n < 0) // VRAI
	{
		n *= -1; // n = 1 000 000 000
		sign++; // sign = 1
	}
	if (n == 0)
		*len = 1;
	else if (n > 999999999) // VRAI
		*len = 10;
	else
	{
		if (n / 10 != 0)
			ft_intlen(n / 10, len + 1, sign);
	}
}

void	ft_itoa_assignment(int n, char *str, int sign, int len) // n = - 1 000 000 000, *str, sign = 1, len = 10
{
	int		i;

	i = 0;
	if (sign == 1) // VRAI
	{
		str[i] = '-'; // str = "-"
		n *= -1; // n = 1 000 000 000
		i++; // i = 1
		while (i <= len) // 11 !<= 10
		{
			str[i] = (n / ft_puiss(10, len - i)) % 10 + '0'; // str = "-1 000 000 000"
			i++; // i = 11
		}
	}
	else
	{
		// GERER LE CAS D'ERREUR OU FT_PUISS RETOURNE 10¹⁰ > MAX_INT
		while (i < len)
		{
			str[i] = (n / ft_puiss(10, len - i - 1)) % 10 + '0';
			i++;
		}
	}
	str[i] = '\0'; // str = "\0"
}

char	*ft_itoa(int n) // n = - 1 000 000 000
{
	char	*str;
	int		len;
	int		sign;

	len = 1;
	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_intlen(n, &len, &sign); // len = 10, sign = 1
	str = malloc(len + 1 + sign); // str = 12 octets
	if (str == NULL)
		return (NULL);
	ft_itoa_assignment(n, str, sign, len); // str = "\0"
	return (str);
}
