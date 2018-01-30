/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 17:25:12 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/30 18:49:23 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int				i;
	char			*ret;
//	char			**ptr;
	char			*buff;

	i = 0;
	while (read(fd, buff, BUFF_SIZE)) // vrai tant que caractere lu != '\0'
	{
		printf("i = %d\n", i);
		ret = (char *)malloc(BUFF_SIZE); // ret = 32 octets
		if (ret == NULL)
		{
			return (-1);
		}
		ret = buff;
//		ptr = &ret;
		if (*buff == '\n')
		{
			return (1);
		}
		else if (*buff == '\0')
		{
			return (42);
		}
		i++;
	}
	return (21);
}

// ___A RETIRER___
#include <stdio.h>
// ___A RETIRER___

int		main(int ac, char **av)
{
	int		fd;
	char	*buff;

	if (ac != 2)
	{
		write(1, "usage: ./a.out file\n", 20);
		return (NULL);
	}
	fd = open(av[1], O_RDONLY); // open "texte.txt"
	if (fd == -1)
		return (NULL);
	printf("GNL return : %d", get_next_line(fd, &buff));
	return (0);
}
