/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:34:02 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/19 16:41:50 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_foreach(int *tab, int lenght, void(*f)(int));

int		main()
{
	int			tab[7] = {42, 21, 84, 0, -2147483648, 2147483647, -424242};

	ft_foreach(tab, 7, &ft_putnbr);
	return 0;
}
