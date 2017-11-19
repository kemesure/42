/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:34:02 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/19 18:43:57 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_foreach(int *tab, int lenght, void(*f)(int));

int		main(void)
{
	int		tab[7];

	tab[0] = 42;
	tab[0] = 21;
	tab[0] = 84;
	tab[0] = 0;
	tab[0] = -2147483648;
	tab[0] = 2147483647;
	tab[0] = -424242;
	ft_foreach(tab, 7, &ft_putnbr);
	return (0);
}
