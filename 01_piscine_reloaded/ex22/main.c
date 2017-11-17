/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 22:23:19 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/15 23:00:41 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int		main()
{
	printf("ABS(42)          = %d\n", ABS(42));
	printf("ABS(-42)         = %d\n", ABS(-42));
	printf("ABS(-1)          = %d\n", ABS(-1));
	printf("ABS(0)           = %d\n", ABS(0));
	printf("ABS(1)           = %d\n", ABS(1));
	printf("ABS(2147483647)  = %d\n", ABS(2147483647));
	// -2 147 483 648 is an int but his absolute value (2 147 483 648) is not an int
	printf("ABS(-2147483648) = %lld\n", ABS(-2147483648));
	return (0);
}
