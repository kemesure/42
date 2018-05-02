/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 15:57:20 by kemesure          #+#    #+#             */
/*   Updated: 2018/05/02 18:17:51 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// ___A RETIRER___
#include <stdio.h>
// ___A RETIRER___

/*
** ft_realloc permet de :
** - liberer la memoire de str (si pas deja vide)
** - reallouer ou allouer size octets a str
*/
// adresse d'un char * non malloque, 1
char *ft_realloc(char **str, int size)
{
	printf("\tREALLOC\n");
	if (!str)
		free(*str);
	*str = (char *)malloc(size);
	printf("\tEND REALLOC\n");
	return (*str);
}

/*
** ft_strjoin_and_free permet de :
** - concatener s1 et s2
** - liberer la memoire de s1
*/
char	*ft_strjoin_and_free(char *s1, char *s2)
{
	printf("\tJOIN AND FREE\n");
	char	*str;

	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	if (s1 != NULL)
		free(s1);
	printf("\tJOIN AND FREE\n");
	return (str);
}

//									  "\n\0",		   "",		1
int		ft_save_buff_in_the_line(char **buff, char **line, int rd)
{
	printf("\tSAVE BUFF IN THE LINE\n");
	char	*buff2;
	int		i;
	int		j;

	i = -1;
	j = -1;

// VERIFIER SI LE BUFFER CONTIENT UN '\n'
	while ((*buff)[++i] != '\n' && (*buff)[i]) // buff[0] = '\n' donc FAUX
		;
// - SI OUI, 1) STOCKER LA PARTIE D'AVANT CE '\n' DANS *line
//   ET      2) STOCKER LA PARTIE D'APRES LE '\n' DANS *buff grace a buff2
	if ((*buff)[i] == '\n') // buff[0] = '\n' donc VRAI
	{
	// 1) PARTIE 1
		// cas particulier : debut du fichier par un '\n'
		if (i == 0) // i = 0 donc VRAI
		{
			*line = ft_strdup("\0"); // line = "\0" = 1 octet						----- ALLOCATION -----
			if (!*line)
				return (-1);
		}
		else if ((*buff)[i] == '\n') // FAUX
		{
			*line = ft_realloc(&*line, i + 1);
			if (!*line)
				return (-1);
			while (++j < i)
				(*line)[j] = (*buff)[j];
			(*line)[j] = '\0';
		}
		// positionner le i sur le 1er '\n' ou '\0'
		i = -1;
		while ((*buff)[++i] != '\n' && (*buff)[i]) // buff[0] = '\n' donc FAUX
			;
	// 2) PARTIE 2
		printf("ici\n");
		buff2 = ft_realloc(&buff2, ft_strlen(*buff) - i); // buff2 = 1 octet		----- ALLOCATION -----
		if (!buff2)
			return (-1);
		// cas particulier si il y a un '\0' apres le '\n'
		if (ft_strlen(*buff) - i == 1) // 1 = 1 donc VRAI
			buff2[0] = '\0'; // buff2 = "\0"
		else // FAUX
		{
			while ((*buff)[++j])		   // -------- CODER A PARTIR D'ICI --------
				(*buff)[++i] = (*buff)[j]; // -------- CODER A PARTIR D'ICI --------
			(*buff)[++i] = '\0';		   // -------- CODER A PARTIR D'ICI --------
		}
		*buff = ft_realloc(&*buff, ft_strlen(buff2) + 1); // buff = 1 octet			---- REALLOCATION ----
		if (!*buff)
			return (-1);
		ft_strcpy(*buff, buff2); // buff = "\0"
		free(buff2);
	}
// - SI NON, TOUT STOCKER DANS *line ET REVERIFIER TANT QU'ON TROUVE PAS DE '\n'
	else // FAUX
	{
		*line = ft_realloc(&*line, rd + 1);
		if (!*line)
			return (-1);
		while ((*buff)[++j])
			(*line)[j] = (*buff)[j];
		(*line)[++j] = '\0';
	}
	printf("\tEND SAVE BUFF IN THE LINE\n");
	return (1);  // -------------------------------------- return 1 --------------------------------------
}

// txt = "\n\0"
//		 "0 1 "
int		get_next_line(const int fd, char **line)
{
	printf("\tGNL\n");
//	static int		nbc = 0;
	static char		*buff;
	static int		rd = 0;

	// INITIALISATION DU BUFFER
	if (!buff && !(rd = 0)) // buff n'existe pas VRAI donc rd = 0
	{
		buff = (char *)malloc(BUFF_SIZE + 1); // buff == 33 octets					----- ALLOCATION -----
		if (!buff)
			return (-1);
	}
	if (rd == 0 || rd == BUFF_SIZE) // rd = 0 VRAI
	{
		rd = read(fd, buff, BUFF_SIZE); // rd = 1 ET buff = "\n"
		if (!rd)
			return (0);
		buff[rd] = '\0'; // buff = "\n\0"
	}
	if (ft_save_buff_in_the_line(&buff, &*line, rd) == -1) // 1 != -1 donc FAUX
		return (-1);
	printf("\tEND GNL\n");
	if (rd == 0) // 1 != 0 donc FAUX
		return (0);  // ------------------------------------ return 1 ------------------------------------
	else // VRAI
		return (1);
}

// txt = "\n\0"
//		 "0 1 "
int		main(int ac, char **av)
{
	printf("\tMAIN\n");
	int		fd;
	char	*line;
	int		gnl;

	gnl = 1;
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (-1);
	while (gnl == 1)
	{
		gnl = get_next_line(fd, &line); // gnl = 0
		printf("line = \"%s\"\n", line);
		free(line);
 		if (gnl != 1)
			printf("GNL return : %d\n", gnl);
		printf("_______________________________________________________________\n");
	}
	printf("\tEND MAIN\n");
	return (0);
}
