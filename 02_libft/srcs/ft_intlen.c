/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 13:44:13 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/22 13:45:27 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION :
**	Prend en parametres deux entiers n et sign. Sign est modifie par un passage
**	par reference. Si n est negatif, sign vaut 1 sinon sign vaut 0.
**
**	RETURN VALUE :
**	ft_intlen retourne le nombre de chiffres dans le nombre n.
*/

int		ft_intlen(int n, int *sign)
{
	int		len;

	len = 0;
	if (n == -2147483648)
	{
		++(*sign);
		return (10);
	}
	if (n < 0)
	{
		n *= -1;
		++(*sign);
	}
	if (n == 0)
		return (1);
	else if (n > 999999999)
		return (10);
	while (n / 10 != 0)
	{
		n /= 10;
		++len;
	}
	return (len + 1);
}
