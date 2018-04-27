/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   old_gnl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 17:25:12 by kemesure          #+#    #+#             */
/*   Updated: 2018/04/27 14:27:33 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
**	DESCRIPTION :
**	Lire fichier et copier BUFF_SIZE octets dans un char *buff
**	Faire une sauvegarde de char *buff dans static char *saved
**	. Si saved contient un '\n', afficher strsub(saved, 0, i),
**		buf = ce qui reste apres le '\n' et free(saved)
**	. Sinon on efface les 32 caracteres lu par les 32 suivants
**		et saved = strjoin(saved, buff)
**
**	RETURN VALUE :
**	. -1 si il y a une erreur
**	.  0 si tab[i + 1] == NULL
**	.  1 si tab[i + 1] != NULL
**
**	variable static qui conserve le nombre d'octets effaces
**	par la copie de buf dans s.saved
**
**	Pour le bonus multi fichiers :
**	Liste chainee avec pointeur sur debut et un autre qui
**	parcourt tant que ce n'est pas le bon fichier.
**	Si next == NULL, creer un nouveau maillon.
**
**	PROBLEME AVEC LES FICHIERS QUI ONT DES LIGNES DE PLUS DE BUFF_SIZE CARACTERES.
**	CAUSE DU PROBLEME : JE N'AI PAS LA BONNE METHODE.
*/

// ___A RETIRER___
#include <stdio.h>
// ___A RETIRER___

int		ft_save_buff(char **line)
{
	//printf("|\t\t\tSAVE BUFF\n");
	int		i;
	int		j;

	i = -1;
	j = -1;
	while ((*line)[++i])
		;
	while ((*line)[++i])
		(*line)[++j] = (*line)[i];
	(*line)[++j] = '\0';
	//printf("|\t\t\t|\t\t\t*line = \"%s\"\n", *line);
	i = -1;
	while ((*line)[++i] != '\n' && (*line)[i])
		;
	if ((*line)[i] == '\n')
	{
		(*line)[i] = '\0';
		return (1);
	}
	//printf("|\t\t\tSAVE BUFF FIN\n");
	return (0);
}

//								*line,		buff
char	*ft_strjoin_and_free(char *s1, char *s2)
{
	//printf("|\t\t\tJOIN AND FREE\n");
	char	*str;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(size);
	//str = (char *)malloc(10);
	//printf("|\t\t\t|\t\t\tMALLOC FAIT\n");
// ---------------------------------------- ALLOCATION, str = 3 octets
	//printf("|\t\t\t|\t\t\tSTR = NULL ?\n");
	if (str == NULL)
		return (NULL);
	//printf("|\t\t\t|\t\t\tFT_STRCPY(STR, S1)\n");
	ft_strcpy(str, s1);
	//printf("|\t\t\t|\t\t\tFT_STRCAT(STR, S2)\n");
	ft_strcat(str, s2);
	//printf("|\t\t\t|\t\t\tstr = \"%s\"\n", str);
	if (s1 != NULL)
	{
		//printf("|\t\t\t|\t\t\tFREE(S1) <=> FREE(*line)\n");
		free(s1); // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// ---------------------------------------- LIBERATION DE MEMOIRE, free(s1)
	}
	//printf("|\t\t\tJOIN AND FREE FIN\n");
	return (str);
}

int		get_next_line(const int fd, char **line)
{
	static unsigned int		nbc = 0;
	char					buff[BUFF_SIZE + 1];
	int						rd;
	int						i;

	i = -1;
	if (*line)
		if (!(nbc = 0) && ft_save_buff(&*line) == 1)
			return (1);
	//printf("LECTURE DU FICHIER\n");
	rd = read(fd, buff, BUFF_SIZE);
	if (!rd)
		return (0);
	buff[rd] = '\0';
	if (*line && (*line)[0] != '\0')
	{
		//printf("*line = \"%s\"\n", *line);
		//printf(" buff = \"%s\"\n",  buff);
		*line = ft_strjoin_and_free(*line, buff);
		if (!*line)
			return (-1);
		//printf(" buff = \"%s\"\n", buff);
	}
	if (!(*line))
		while (buff[++i] != '\n' && buff[i])
			++nbc;
	else
		while ((*line)[++i] != '\n' && (*line)[i])
			++nbc;
	*line = ft_strdup(buff);
// ---------------------------------------- ALLOCATION, *line = 2 octets
	if (!*line)
		return (-1);
	//printf("nbc = %u\n", nbc);
	//printf("ft_strlen(*line) = %zu\n", ft_strlen(*line));
	if (nbc == ft_strlen(*line))
	{
		//printf("*line = \"%s\"\n", *line);
		//printf("nbc = %u\n", nbc);
		//printf("ft_strlen(*line) = %zu\n", ft_strlen(*line));
		while (nbc == ft_strlen(*line))
		{
			//printf("RELECTURE DU FICHIER\n");
			rd = read(fd, buff, BUFF_SIZE);
			//printf("RELECTURE FAITE\n");
			if (!rd)
				return (0);
			buff[rd] = '\0';
			//printf("BUFF[RD]='\\0'\n");
			//printf("buff = \"%s\"\n", buff);
			*line = ft_strjoin_and_free(*line, buff);
// ---------------------------------------- LIBERATION DE MEMOIRE, free(*line)
// ---------------------------------------- ALLOCATION, *line = 65 octets
			if (!*line)
				return (-1);
			//printf("*line = \"%s\"\n", *line);
			while ((*line)[i] != '\n' && (*line)[i])
			{
				++nbc;
				++i;
			}
			//printf("nbc = %u\n", nbc);
			//printf("ft_strlen(*line) = %zu\n", ft_strlen(*line));
		}
	}
	if (nbc != ft_strlen(*line))
		(*line)[i] = '\0';
	if (rd != 0)
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	int		fd;
	char	*line = NULL;
	int		gnl;

	gnl = 1;
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (-1);
	while (gnl == 1)
	{
		gnl = get_next_line(fd, &line);
		printf("line = \"%s\"\n", line);
 		if (gnl != 1)
 		{
 			free(line);
			printf("GNL return : %d\n", gnl);
 		}
		printf("_______________________________________________________________\n");
	}
	return (0);
}

// test sur /dev/random -> pour etre sur
// probleme de taille de BUFFSIZE
// TEST EN COURS SUR TXT2.TXT (j'en suis au debut de la 2eme ligne ("\n"))
