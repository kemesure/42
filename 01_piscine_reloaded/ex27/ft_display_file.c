/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 21:19:30 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/19 17:17:03 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_display_file(int fd)
{
	char	buffer;

	while (read(fd, &buffer, 1))
		write(1, &buffer, 1);
}
