/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 17:25:12 by kemesure          #+#    #+#             */
/*   Updated: 2018/03/10 18:48:53 by kemesure         ###   ########.fr       */
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

int		get_next_line(const int fd, char **line)
{
	static unsigned int		nbc = 0;
	char					*buff;
	char					*buff2;
	int						rd;
	int						i;
	int						j;

	i = -1;
	j = -1;
	if (*line)
	{
		//printf("\t\t\tSAUVEGARDE DU RESTE DU BUFFER\n");
		while ((*line)[++i])
			;
		while ((*line)[++i])
			(*line)[++j] = (*line)[i];
		(*line)[++j] = '\0';
		//printf("\t*line = \"%s\"\n", *line);
		i = -1;
		while ((*line)[++i] != '\n' && (*line)[i])
			;
		if ((*line)[i] == '\n')
		{
			(*line)[i] = '\0';
			return (1);
		}
		nbc = 0;
		i = -1;
	}
	if (!(buff = (char *)malloc(BUFF_SIZE + 1))) // buff vaut 33 octets
		return (-1);
	//printf("\t\t\tLECTURE DU FICHIER\n");
	// Les 32 caracteres suivants du fichier sont copies dans buff
	rd = read(fd, buff, BUFF_SIZE);
	if (rd == 0)
		return (0);
	buff[rd] = '\0';
	//printf("\tbuff = \"%s\"\n", buff);
	if (*line && (*line)[0] != '\0')
	{
		buff2 = ft_strdup(buff);
		if (!buff2)
			return (-1);
		free(buff);
		buff = ft_strjoin(*line, buff2);
		if (!buff)
			return (-1);
		free(buff2);
		//printf("\tbuff = \"%s\"\n", buff);
	}
	while (buff[++i] != '\n' && buff[i])
		++nbc;
	free(*line);
	*line = ft_strdup(buff);
	if (!*line)
		return (-1);
	// QUE CE PASSE T IL SI nbc = 0 ?
	//printf("\tnbc(= %u) %% ft_strlen(*line)(= %zu) = %lu\n", nbc, ft_strlen(*line), nbc % ft_strlen(*line));
	if (nbc % ft_strlen(*line) == 0 && rd == BUFF_SIZE)
	{
		//printf("\t*line = \"%s\"\n", *line);
		// Ajouter la suite a *line
		//printf("\tnbc(= %u) %% ft_strlen(*line)(= %zu) = %lu\n", nbc, ft_strlen(*line), nbc % ft_strlen(*line));
		while (nbc % ft_strlen(*line) == 0)
		{
			//printf("\t\t\tLECTURE DU FICHIER\n");
			// Les 32 caracteres suivants du fichier sont copies dans buff
			if (read(fd, buff, BUFF_SIZE) == 0)
				return (0);
			buff[BUFF_SIZE] = '\0';
			//printf("\tbuff = \"%s\"\n", buff);
			buff2 = ft_strdup(*line);
			if (!buff2)
				return (-1);
			free(*line);
			*line = ft_strjoin(buff2, buff);
			if (!*line)
				return (-1);
			free(buff2);
			//printf("\t*line = \"%s\"\n", *line);
			while ((*line)[i] != '\n' && (*line)[i])
			{
				++nbc;
				++i;
			}
			//printf("\tnbc(= %u) %% ft_strlen(*line)(= %zu) = %lu\n", nbc, ft_strlen(*line), nbc % ft_strlen(*line));
		}
	}
	// Il faut enlever tout ce qui se trouve apres le '\n'
	if (nbc % ft_strlen(*line) != 0 && rd == BUFF_SIZE)
		(*line)[i] = '\0';
	if (rd == BUFF_SIZE)
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
	while(gnl == 1)
	{
		gnl = get_next_line(fd, &line);
 		if (gnl != 1)
			printf("GNL return : %d\n", gnl);
		printf("\"%s\"\n", line);
	}
	return (0);
}
// test sur txt/txt.txt  -> ligne vide a la fin
// test sur txt/txt2.txt -> affiche tout sur une seule ligne
// test sur /dev/random  -> pour etre sur