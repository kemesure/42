/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:04:28 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/19 17:59:32 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	printf("-2147483649! = %d\n", ft_recursive_factorial(-2147483649));
	printf("-2147483648! = %d\n", ft_recursive_factorial(-2147483648));
	printf("-2147483647! = %d\n", ft_recursive_factorial(-2147483647));
	printf("-42! = %d\n", ft_recursive_factorial(-42));
	printf("-1! = %d\n", ft_recursive_factorial(-1));
	printf("0! = %d\n", ft_recursive_factorial(0));
	printf("1! = %d\n", ft_recursive_factorial(1));
	printf("2! = %d\n", ft_recursive_factorial(2));
	printf("3! = %d\n", ft_recursive_factorial(3));
	printf("4! = %d\n", ft_recursive_factorial(4));
	printf("5! = %d\n", ft_recursive_factorial(5));
	printf("6! = %d\n", ft_recursive_factorial(6));
	printf("7! = %d\n", ft_recursive_factorial(7));
	printf("8! = %d\n", ft_recursive_factorial(8));
	printf("9! = %d\n", ft_recursive_factorial(9));
	printf("10! = %d\n", ft_recursive_factorial(10));
	printf("11! = %d\n", ft_recursive_factorial(11));
	printf("12! = %d\n", ft_recursive_factorial(12));
	printf("13! = %d\n", ft_recursive_factorial(13));
	printf("14! = %d\n", ft_recursive_factorial(14));
	printf("15! = %d\n", ft_recursive_factorial(15));
	printf("2147483647! = %d\n", ft_recursive_factorial(2147483647));
	printf("2147483648! = %d\n", ft_recursive_factorial(2147483648));
	printf("2147483649! = %d\n", ft_recursive_factorial(2147483649));
	return (0);
}
