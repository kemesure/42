/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 15:57:20 by kemesure          #+#    #+#             */
/*   Updated: 2018/04/27 17:49:44 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// ___A RETIRER___
#include <stdio.h>
// ___A RETIRER___

//			*line = "123\0", size = 2
char *ft_realloc(char **str, int size)
{
	if (*str) // VRAI
		free(*str); // *line = "" 0 octets
	*str = (char *)malloc(size); // ALLOCATION DE *line (2 octets)
	return (*str);
}

char	*ft_strjoin_and_free(char *s1, char *s2)
{
	char	*str;

	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	if (s1 != NULL)
		free(s1);
	return (str);
}

//                               buff="\n\0",  *line = "", rd = 1
int		ft_save_buff_in_the_line(char **buff, char **line, int rd)
{
	char	*buff2;
	int		i;
	int		j;

	i = -1;
	j = -1;

// VERIFIER SI LE BUFFER CONTIENT UN '\n'
	while ((*buff)[++i] != '\n' && (*buff)[i]) // FAUX *buff[0] = '\n'
		;
	// - SI OUI, STOCKER LA PARTIE D'AVANT CE '\n' DANS *line
	// cas particulier debut du fichier par un '\n'
	if ((*buff)[i] == '\n' && i == 0) // VRAI
	{
		*line = ft_strdup("\n"); // ALLOCATION DE *line (2 octets) = "\n\0"
		if (!*line) // FAUX, on viens de faire l'allocation
			return (-1);
	}
	else if ((*buff)[i] == '\n') // FAUX, le if etait VRAI (DANS L'EX i VAUT 2 )
	{							 //                        (ET buff VAUT "12\0")
		*line = ft_realloc(&*line, i + 1); // ALLOCATION DE *line (2 octets)
		if (!*line) // FAUX, on viens de faire l'allocation
			return (-1);
		while (++j < i)				   // 2 < 2 FAUX
			(*line)[j] = (*buff)[j];   // *line = "12"
		(*line)[j] = '\0';			   // *line = "12\0"
	}
	// positionner le i sur le 1er '\n' ou '\0'
	i = -1;
	while ((*buff)[++i] != '\n' && (*buff)[i]) // FAUX *buff[0] = '\n'
		;
	// - ET SI OUI, STOCKER LA PARTIE D'APRES LE '\n' DANS *buff grace a buff2
	buff2 = ft_realloc(&buff2, ft_strlen(*buff) - i); // ALLOCATION DE *buff 5octets
	if (!buff2) // FAUX, on viens de faire l'allocation
		return (-1);
	// cas particulier si il y a un '\0' apres le '\n'
	if ((ft_strlen(*buff) - i) == 1)
		buff2[0] = '\0';
	else
	{
		while ((*buff)[++j])		   // -------- CODER A PARTIR D'ICI --------
			(*buff)[++i] = (*buff)[j]; // -------- CODER A PARTIR D'ICI --------
		(*buff)[++i] = '\0';		   // -------- CODER A PARTIR D'ICI --------
	}
//	}
	// SI NON, TOUT STOCKER DANS *line ET REVERIFIER TANT QU'ON TROUVE PAS DE '\n'
	else
	{
		*line = ft_realloc(&*line, rd + 1); // =  octets	// ALLOCATION DE *line
		if (!*line)
			return (-1);
		while ((*buff)[++j])		 // *buff[] = ''
			(*line)[j] = (*buff)[j]; // *line    = ""
		(*line)[++j] = '\0';		 // *line    = ""
	}
	return (1);
}

// txt = "\n\0"
//		 "0 1 "
int		get_next_line(const int fd, char **line)
{
//	static int		nbc = 0;
	static char		*buff;	// = ""
	static int		rd = 0;	// = 0

	// INITIALISATION DU BUFFER
	if (!buff && !(rd = 0)) // VRAI et rd = 0
	{
		buff = (char *)malloc(BUFF_SIZE + 1); // = 33octets	// ALLOCATION DE buff
		if (!buff) // FAUX, on viens de faire l'allocation
			return (-1);
	}
	if (rd == 0 || rd == BUFF_SIZE) // VRAI rd = 0
	{
		rd = read(fd, buff, BUFF_SIZE); // rd = 1 et buff = "\n"
		if (!rd) // !1 = FAUX
			return (0);
		buff[rd] = '\0'; // buff = "\n\0"
	}
	if (ft_save_buff_in_the_line(&buff, &*line, rd) == -1)
		return (-1);
	if (rd == BUFF_SIZE)
		return (1);
	else
		return (0);
}

// txt = "\n\0"
//		 "0 1 "
int		main(int ac, char **av)
{
	int		fd;
	char	*line;
	int		gnl;

	gnl = 1;
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (-1);
	while (gnl == 1)
	{
		gnl = get_next_line(fd, &line);
		printf("line = \"%s\"\n", line);
		free(line);
 		if (gnl != 1)
			printf("GNL return : %d\n", gnl);
		printf("_______________________________________________________________\n");
	}
	return (0);
}
