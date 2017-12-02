/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 19:46:42 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/02 20:27:45 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

int		ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int		main(void)
{
	printf("   isalnum(%c) : %d\n", '0',    isalnum('0'));
	printf("ft_isalnum(%c) : %d\n", '0', ft_isalnum('0'));
	printf("\n");
	printf("   isalnum(%c) : %d\n", '9',    isalnum('9'));
	printf("ft_isalnum(%c) : %d\n", '9', ft_isalnum('9'));
	printf("\n");
	printf("   isalnum(%c) : %d\n", 'A',    isalnum('A'));
	printf("ft_isalnum(%c) : %d\n", 'A', ft_isalnum('A'));
	printf("\n");
	printf("   isalnum(%c) : %d\n", 'z',    isalnum('z'));
	printf("ft_isalnum(%c) : %d\n", 'z', ft_isalnum('z'));
	printf("\n");
	printf("   isalnum(%c) : %d\n", '.',    isalnum('.'));
	printf("ft_isalnum(%c) : %d\n", '.', ft_isalnum('.'));
	printf("\n");
	printf("   isalnum(%c) : %d\n", ' ',    isalnum(' '));
	printf("ft_isalnum(%c) : %d\n", ' ', ft_isalnum(' '));
	return (0);
}
