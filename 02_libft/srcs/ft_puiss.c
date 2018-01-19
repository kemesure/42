/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puiss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:48:35 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/09 12:49:20 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_puiss(int nb, int puiss)
{
	int		ret;

	ret = nb;
	if (puiss == 0)
		return (1);
	if (puiss == 1)
		return (nb);
	while (puiss > 1)
	{
		ret *= nb;
		puiss--;
	}
	return (ret);
}
