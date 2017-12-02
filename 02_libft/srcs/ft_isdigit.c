/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 19:38:03 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/02 19:42:38 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		main(void)
{
	printf("   isdigit(%c) : %d\n", '0',    isdigit('0'));
	printf("ft_isdigit(%c) : %d\n", '0', ft_isdigit('0'));
	printf("\n");
	printf("   isdigit(%c) : %d\n", '9',    isdigit('9'));
	printf("ft_isdigit(%c) : %d\n", '9', ft_isdigit('9'));
	printf("\n");
	printf("   isdigit(%c) : %d\n", 'A',    isdigit('A'));
	printf("ft_isdigit(%c) : %d\n", 'A', ft_isdigit('A'));
	printf("\n");
	printf("   isdigit(%c) : %d\n", 'z',    isdigit('z'));
	printf("ft_isdigit(%c) : %d\n", 'z', ft_isdigit('z'));
	printf("\n");
	printf("   isdigit(%c) : %d\n", '.',    isdigit('.'));
	printf("ft_isdigit(%c) : %d\n", '.', ft_isdigit('.'));
	printf("\n");
	printf("   isdigit(%c) : %d\n", ' ',    isdigit(' '));
	printf("ft_isdigit(%c) : %d\n", ' ', ft_isdigit(' '));
	return (0);
}
