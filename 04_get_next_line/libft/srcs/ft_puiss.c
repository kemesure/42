/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puiss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 12:48:35 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/22 13:45:44 by kemesure         ###   ########.fr       */
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
	++puiss;
	while (--puiss > 1)
		ret *= nb;
	return (ret);
}
