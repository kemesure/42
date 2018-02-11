/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 17:25:12 by kemesure          #+#    #+#             */
/*   Updated: 2018/02/11 13:33:31 by kemesure         ###   ########.fr       */
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

// txt.txt =                       |                                |                                 |
// "abcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\n\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz0123456789\nceci est la derniere ligne... c est fini"
// "0123456789012345678901234567890123456 789012345678901234567890123 456789012345678901234567890 123456789..."
// "0         1         2         3          4         5         6          7         8         9          ..."

int		get_next_line(const int fd, char **line)
{
	// s.saved = "",	  s.b1 = 1		s.b2 = 1
	static t_struct		s = (t_struct){"", 1, 1};
	char				*buff;
	char				*buf;
	int					i;

	i = 0;
	// Si je dois lire ou relire le fichier (si pas de '\n')
	while (s.saved[i] != '\n' && s.saved[i] != '\0') // s.saved[0] = '\0'
		++i;
	if (s.saved[i] == '\0') // VRAI
		s.b1 = 1;
	if (s.b1 && s.b2) // 1 & 1 = VRAI
	{
		if (!(buff = (char *)malloc(BUFF_SIZE + 1))) // buff = 33 octets
			return (-1);
		printf("\t\t\tLECTURE DU FICHIER\n");
		// Les 32 caracteres suivants du fichier sont copies dans buff
		// buff    = "abcdefghijklmnopqrstuvwxyz012345"
		if (read(fd, buff, BUFF_SIZE) != BUFF_SIZE) // FAUX car pas fini de lire
			s.b2 = 0;
		// buff    = "abcdefghijklmnopqrstuvwxyz012345\0"
		buff[BUFF_SIZE] = '\0';
		// concatenation de s.saved et buff
		// s.saved = "abcdefghijklmnopqrstuvwxyz012345\0"
		ft_strcat(s.saved, buff);
		// buff = 33 * '\0'
		ft_bzero(buff, BUFF_SIZE);
		s.b1 = 0;
	}
	i = 0;
	printf("s.saved = \"%s\"\n", s.saved);
	while (i <= ft_strlen(s.saved)) // 0 <= 32
	{
		if (s.saved[i] == '\n' || s.saved[i] == '\0') // s.saved[0] = 'a'
		{
			// *line = "ligne \0"
			if (s.saved[i] == '\0')
				*line = ft_strsub(s.saved, 0, i - 1);
			else
				*line = ft_strsub(s.saved, 0, i);
			if (*line == NULL)
				return (-1);
			if (s.saved[i] == '\n') // VRAI
			{
				// buf = "l2\nln 03\nln04\nln5\nligne\0"
				buf = ft_strsub(s.saved, i + 1, ft_strlen(s.saved) - i - 1);
				if (buf == NULL)
					return (-1);
			}
			// s.saved = buf; ----------------------------------------------------------------------------------------------------------------------
//			printf("(1)_____________________S.SAVED = \"%s\"\n", s.saved);										// s.saved			  = "\nligne \0"
//			printf("(2)_________________________BUF = \"%s\"\n", buf);											// buf				  =   "ligne \0"
//			printf("(3)__________FT_STRLEN(BUF) + 1 = %zu\n", ft_strlen(buf) + 1);								// ft_strlen(buf) + 1 = 7
//			printf("   __________FT_MEMCPY(1, 2, 3) = \"%s\"\n",
			// ce ft_memcpy segfault
			ft_memcpy(s.saved, buf, ft_strlen(buf) + 1);//);	// s.saved			  =   "ligne \0"
			return (1); // return 1 (ligne lue et stockee dans *line)
		}
		++i; // i = 
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		fd;
	char	*line;
	int		i;
	int		gnl;

	i = 0;
	fd = open(av[1], O_RDONLY); // open "txt/txt.txt"
	if (fd == -1)
		return (-1);
	while(i < 12)
	{
		gnl = get_next_line(fd, &line);
 		if (gnl != 1)
			printf("GNL return : %d\n", gnl);
		printf("line = \"%s\"\n", line);
		++i;
	}
//	printf("i = %d\n", i);
	return (0);
}
