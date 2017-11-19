/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:57:25 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/19 17:56:26 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		result;

	if (nb >= 0 && nb < 13)
	{
		if (nb == 0)
			result = 1;
		else
		{
			result = nb;
			while (nb > 1)
			{
				result *= (nb - 1);
				nb--;
			}
		}
	}
	else
		result = 0;
	return (result);
}
