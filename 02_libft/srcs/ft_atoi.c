/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:31:05 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/02 18:46:58 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

int		ft_puiss(int nb, int puiss)
{
	int		ret;

	ret = nb;
	if (puiss == 0)
		return (1);
	if (puiss == 1)
		return (nb);
	while (puiss > 1)
	{
		ret *= nb;
		puiss--;
	}
	return (ret);
}

int		ft_atoi(const char *str)
{
	int		i;
	int		puiss;
	int		sign;
	int		nb;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\r'
			|| str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = 44 - str[i];
		i++;
	}
	puiss = i;
	while (str[puiss] >= '0' && str[puiss] <= '9')
		puiss++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb += (str[i] - 48) * ft_puiss(10, puiss - i - 1);
		i++;
	}
	return (nb * sign);
}

int		main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = (char *)malloc(42);
	strcpy(s1, " \t \n \v \r 42 ");
	s2 = (char *)malloc(42);
	strcpy(s2, " \t \n \v \r +42 ");
	s3 = (char *)malloc(42);
	strcpy(s3, " \t \n \v \r -42 ");
	s4 = (char *)malloc(42);
	strcpy(s4, " \t \n \v \r -+42 ");
	printf("   atoi(\" \\t \\n \\v \\r 42 \") : %d\n",    atoi(s1));
	printf("ft_atoi(\" \\t \\n \\v \\r 42 \") : %d\n", ft_atoi(s1));
	printf("\n");
	printf("   atoi(\" \\t \\n \\v \\r +42 \") : %d\n",    atoi(s2));
	printf("ft_atoi(\" \\t \\n \\v \\r +42 \") : %d\n", ft_atoi(s2));
	printf("\n");
	printf("   atoi(\" \\t \\n \\v \\r -42 \") : %d\n",    atoi(s3));
	printf("ft_atoi(\" \\t \\n \\v \\r -42 \") : %d\n", ft_atoi(s3));
	printf("\n");
	printf("   atoi(\" \\t \\n \\v \\r -+42 \") : %d\n",    atoi(s4));
	printf("ft_atoi(\" \\t \\n \\v \\r -+42 \") : %d\n", ft_atoi(s4));
	return (0);
}
