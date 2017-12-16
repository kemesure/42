/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 13:25:56 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/16 14:34:38 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf(" __________________________________________________\n");
	printf("|                     PARTIE 2                     |\n");
	printf("|__________________________________________________|\n\n\n");
	/*
		ITOA
	*/
/*	printf("------------------------------------------ITOA\n");
	printf("ft_itoa(%d) : \"%s\"\n",          42, ft_itoa(42));
	printf("ft_itoa(%d) : \"%s\"\n",         -42, ft_itoa(-42));
	printf("ft_itoa(%d) : \"%s\"\n",  2147483647, ft_itoa(2147483647));
	printf("ft_itoa(%ld) : \"%s\"\n", -2147483648, ft_itoa(-2147483648));
*/	/*
		PUTCHAR
	*/
/*	printf("------------------------------------------PUTCHAR\n");
	int		c = L'ø';
	ft_putstr("caratere unicode : ");
	ft_putchar(c);
	ft_putchar('\n');
*/	/*
		PUTSTR
	*/
/*	printf("------------------------------------------PUTSTR\n");
	ft_putstr("bonjour\n");
*/	/*
		PUTSTR
	*/
/*	printf("------------------------------------------PUTNBR\n");
	ft_putstr("ft_putnbr(42) : \"");
	ft_putnbr(42);
	ft_putstr("\"\nft_putnbr(-42) : \"");
	ft_putnbr(-42);
	ft_putstr("\"\nft_putnbr(2147483647) : \"");
	ft_putnbr(2147483647);
	ft_putstr("\"\nft_putnbr(-2147483648) : \"");
	ft_putnbr(-2147483648);
	ft_putstr("\"\n");
*/	/*
		MEMDEL
	*/
/*	printf("------------------------------------------MEMDEL\n");
	void	*m = malloc(42);

	ft_memdel(&m);
	if (m == NULL)
	{
		printf("m = NULL\n");
		free(m);
	}
*/	/*
		MEMALLOC
	*/
/*	printf("------------------------------------------MEMALLOC\n");
	void	*mem;
	size_t	size;

	size = 42;
	mem = ft_memalloc(size);
	printf("ft_memalloc(%zu)\ntaille allouee a mem : %lu\n", size, sizeof(mem));
*/	/*
		STRSPLIT
	*/
	printf("------------------------------------------STRSPLIT\n");
	char	c;
	char	*str = NULL;
	char	**tab;
//	int		i;

	c = '*';
	ft_strcpy(str, "a"); //*salut*les***etudiants*
	tab = ft_strsplit(str, c);
//	i = 0;
/*	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
	}
*/
	printf("\n END\t\t\tEND\t\t\tEND\n\n");
	return (0);
}
