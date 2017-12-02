/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 18:50:40 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/02 19:45:06 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

int		ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' ))
		return (1);
	return (0);
}

int		main(void)
{
	printf("   isalpha(%c) : %d\n", '0',    isalpha('0'));
	printf("ft_isalpha(%c) : %d\n", '0', ft_isalpha('0'));
	printf("\n");
	printf("   isalpha(%c) : %d\n", '9',    isalpha('9'));
	printf("ft_isalpha(%c) : %d\n", '9', ft_isalpha('9'));
	printf("\n");
	printf("   isalpha(%c) : %d\n", 'A',    isalpha('A'));
	printf("ft_isalpha(%c) : %d\n", 'A', ft_isalpha('A'));
	printf("\n");
	printf("   isalpha(%c) : %d\n", 'z',    isalpha('z'));
	printf("ft_isalpha(%c) : %d\n", 'z', ft_isalpha('z'));
	printf("\n");
	printf("   isalpha(%c) : %d\n", '.',    isalpha('.'));
	printf("ft_isalpha(%c) : %d\n", '.', ft_isalpha('.'));
	printf("\n");
	printf("   isalpha(%c) : %d\n", ' ',    isalpha(' '));
	printf("ft_isalpha(%c) : %d\n", ' ', ft_isalpha(' '));
	return (0);
}
