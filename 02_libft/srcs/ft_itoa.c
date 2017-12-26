/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:00:46 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/24 17:31:29 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_intlen(int n, int *len, int *sign) // n = 4  &  *len = 5  &  sign = 0
{
	if (n == -2147483648) // FAUX
	{
		*len = 12;
		return ;
	}
	else if (n < 0) // FAUX
	{
		n *= -1;
		sign++;
	}
	if (n == 0) // FAUX
		*len = 2;
	else // VRAI
	{
		if (n / 10 != 0) // FAUX 4 / 10 = 0
			ft_intlen(n / 10, len + 1, sign);
	}
}

void	ft_itoa_assignment(int n, char *str, int sign, int len) // n = 42042  &  str  &  sign = 0  &  len = 5
{
	int		i;

	i = 0;
	if (sign == 1) // FAUX
	{
		str[i] = '-';
		n *= -1;
		i++;
		// GERER LE CAS D'ERREUR OU FT_PUISS RETOURNE 10¹⁰ > MAX_INT
		while (i <= len)
		{
			str[i] = (n / ft_puiss(10, len - i)) % 10 + '0';
			i++;
		}
	}
	else
	{
		// GERER LE CAS D'ERREUR OU FT_PUISS RETOURNE 10¹⁰ > MAX_INT
		while (i < len) // FAUX 5 < 5
		{
			str[i] = (n / ft_puiss(10, len - i - 1)) % 10 + '0'; // str = "42042"
			i++; // i = 5
		}
	}
	str[i] = '\0'; // str = "42042\0"
}

char	*ft_itoa(int n) // n = 42042
{
	char	*str;
	int		len;
	int		sign;

	len = 1;
	sign = 0;
	if (n == -2147483648) // FAUX
		return (ft_strdup("-2147483648"));
	ft_intlen(n, &len, &sign); // len = 5  &  sign = 0
	str = malloc(len + 1 + sign); // str = 6 octets
	if (str == NULL)
		return (NULL);
	ft_itoa_assignment(n, str, sign, len); // str = "42042\0"
	return (str);
}
