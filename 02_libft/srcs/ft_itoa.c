/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:00:46 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/28 16:35:24 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
//------------------------------
#include <stdio.h> // A RETIRER
//------------------------------
// n = 6, *len = 3, *sign = 1
void	ft_intlen(int n, int *len, int *sign)
{
	printf("\tFT_INTLEN(int n %d, int *len %d, int *sign %d)\n", n, *len, *sign);
	if (n == -2147483648) // FAUX
	{
		*len = 11;
		return ;
	}
	if (n < 0) // FAUX
	{
		n *= -1; // n = 623
		*sign += 1; // sign = 1
	}
	if (n == 0) // FAUX
		*len = 1;
	else if (n > 999999999) // FAUX
		*len = 10;
	else // VRAI
	{
		if (n / 10 != 0) // 6 / 10 = 0 donc FAUX
		{
			len++;
			ft_intlen(n / 10, len, sign);
		}
	}
}
// n = -623, *str, sign = 1, len = 3
void	ft_itoa_assignment(int n, char *str, int sign, int len)
{
	printf("\tFT_ITOA_ASSIGNMENT(int n %d, char *str \"%s\", int sign %d, int len %d)\n", n, str, sign, len);
	int		i;

	i = 0;
	if (sign == 1) // VRAI
	{
		str[i] = '-'; // str = "-"
		n *= -1; // n = 623
		i++; // i = 1
		while (i <= len) // 4 !<= 3 donc FAUX
		{
			// str = "-623"
			str[i] = (n / ft_puiss(10, len - i)) % 10 + '0';
			i++; // i = 4
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
	str[i] = '\0'; // str = "-623\0"
}
// n = -623
char	*ft_itoa(int n)
{
	printf("\nFT_ITOA(%d)\n", n);
	char	*str;
	int		len;
	int		sign;

	len = 1;
	sign = 0;
	if (n == -2147483648) // FAUX
		return (ft_strdup("-2147483648"));
	ft_intlen(n, &len, &sign); // len = 3, sign = 1
	printf("n = %d, len = %d, sign = %d\n", n, len, sign);
	str = malloc(len + 1 + sign); // str = 5 octets
	if (str == NULL)
		return (NULL);
	ft_itoa_assignment(n, str, sign, len); // str = "-623\0"
	return (str);
}
