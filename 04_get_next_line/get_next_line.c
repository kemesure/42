/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 17:25:12 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/29 17:56:04 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		get_next_line(const int fd, char **line)
{
}

// ___A RETIRER___
#include <stdio.h>
// ___A RETIRER___

int		main(int ac, char **av)
{
	int		fd;
	char	*c;

	if (ac != 2)
	{
		write(1, "usage: ./a.out file\n", 20);
		return (NULL);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (NULL);
	printf("GNL return : %d", get_next_line(fd, &c));
}
