/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 16:03:19 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/03 16:01:10 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = b;
	while (len != 0)
	{
		ptr[i] = c;
		len--;
		i++;
	}
	return (b);
}
