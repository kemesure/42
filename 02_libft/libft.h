/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:11:57 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/18 00:33:25 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H__
# define __LIBFT_H__

#include <string.h>	/* pour mem* et str*	*/
#include <stdlib.h>	/* pour atoi 			*/
#include <ctype.h>	/* pour is* et to*		*/

/*	° Remplit les n premiers octets de la zone		**
**	de memoire pointee par s avec l'octet c.		**
**	° RETOUR : pointeur sur la zone de memoire s.	*/
void	*ft_memset(void *s, int c, size_t n);

/*	° Met a 0 les n premiers octets du bloc pointe par src.	*/
void	ft_bzero(void *s, int n);

/*	° Copie n octets depuis la zone memoire src vers dest.	**
**	Les deux zones ne doivent pas se chevaucher.			**
**	° RETOUR : pointeur sur dest							*/
void	*ft_memcpy(void *dest, const void *src, size_t n);

/*	° Copie au plus n octets de la zone memoire src vers dest.				**
**	Elle s'arrete des qu'elle rencontre le caractere c.						**
**	° RETOUR : pointeur sur le caratere apres c dans la zone dest			**
**	ou NULL si c n'a pas ete trouve dans les n premiers caracteres de src.	*/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

/*	° Copie n octets de la zone memoire src vers dest.	**
**	Les deux zones peuvent se chevaucher.				**
**	° RETOUR : pointeur sur dest						*/
void	*ft_memmove(void *dest, const void *src, size_t n);

/*	° Examine les n premiers octets de la zone memoire		**
**	pointee par s a la recherche du caractere c.			**
**	Le premier octet correspondant a c arrete l'operation.	**
**	° RETOUR : pointeur sur le premier octet correspondant	**
**	ou NULL si le caractere n'est pas present.				*/
void	*ft_memchr(const void *s, int c, size_t n);

/*	° Compare les n premiers octets des zones memoires s1 et s2.					**
**	° RETOUR : entier negatif, nul ou positif si les n premiers octets de s1 sont	**
**	respectivement inferieurs, egaux ou superieurs aux n premiers octets de s2.		*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/*	° Calcule la longueur de la chaine de caracteres s.	**
**	Sans compter le '\0'.								**
**	° RETOUR : nombre de caracteres dans la chaine s.	*/
size_t	ft_strlen(const char *s);

/*	° Duplique la chaine de caracteres s en utilisant malloc et free.	**
**	° RETOUR : pointeur sur la chaine dupliquee							**
**	ou NULL s'il n'y avait pas assez de memoire.						*/
char	*ft_strdup(const char *s);

/*	° Copie la chaine pointee par src (y compris le '\0') dans dest.	**
**	Les deux chaines ne doivent pas se chevaucher.						**
**	La chaine dest doit être assez grande pour accueillir la copie.		**
**	° RETOUR : pointeur sur dest.										*/
char	*ft_strcpy(char *dest, const char *src);

/*	° Copie les n premiers octets de la chaine pointee par src dans dest.	**
**	S'il n'y a pas de caractere '\0' dans les n premiers octets de src,		**
**	il n'y en auras pas non plus dans dest.									**
**	Si la longueur de src est inferieure a n,								**
**	la fin de dest sera remplie avec des '\0'.								**
**	Les deux chaines ne doivent pas se chevaucher.						**
**	La chaine dest doit être assez grande pour accueillir la copie.		**
**	° RETOUR : pointeur sur dest.										*/
char	*ft_strncpy(char *dest, const char *src, size_t n);

/*	° Ajoute la chaine src a la fin de dest en ecrasant le '\0'		**
**	et en rajoutant '\0' apres la copie de src dans dest.			**
**	Les chaines ne doivent pas se chevaucher.						**
**	La chaine dest doit être assez grande pour accueillir la copie.	**
**	° RETOUR : pointeur sur dest.									*/
char	*ft_strcat(char *dest, const char *src);

/*	° Ajoute les n caracteres de src a la fin de dest en ecrasant	**
**	le '\0' et en rajoutant '\0' apres la copie de src dans dest.	**
**	Les chaines ne doivent pas se chevaucher.						**
**	La chaine dest doit être assez grande pour accueillir la copie.	**
**	° RETOUR : pointeur sur dest.									*/
char	*ft_strncat(char *dest, const char *src, size_t n);

/*	JE NE SUIS PAS SUR DE CE QUE J'AI ECRIT SUR CETTE FONCTION	*/
/*	° Copie src a la fin de dest en ecrasant le '\0' et			**
**	en rajoutant '\0' apres la copie de src dans dest.			**
**	strlcat prend la taille complète du buffer.					**
**	src et dest doivent se terminer par '\0'.					**
**	° RETOUR : strlen (dest) apres concatenation				*/
size_t	ft_strlcat(char *dest, const char *src, size_t size);

/*	° Recherche un caractere c dans la chaine s.				**
**	° RETOUR : pointeur sur la premiere occurence du caractere	**
**	c dans s ou NULL si le caractere n'a pas ete trouve.		*/
char	*ft_strchr(const char *s, int c);

/*	° Cherche un caractere c dans la chaine s.					**
**	° RETOUR : pointeur sur la derniere occurence du caractere	**
**	c dans s ou NULL si le caractere n'a pas ete trouve.		*/
char	*ft_strrchr(const char *s, int c);

/*	° Cherche la premiere occurence de la chaine little dans big.		**
**	Les caracteres '\0' ne sont pas compares.							**
**	° RETOUR : pointeur sur little ou NULL si elle n'est pas trouvee.	*/
char	*ft_strstr(const char *big, const char *little);

/*	° Cherche la premiere occurence de la chaine little dans big,	**
**	ou pas plus	de len caracteres sont recherches.					**
**	Les caracteres '\0' ne sont pas compares.						**
**	° RETOUR : Si little est vide, return(big).						**
**	Sinon si little apparait dans big, return(NULL).				**
**	Sinon return(pointeur sur le premier caractere					**
**	de la premiere occurence de little).							*/
char	*ft_strnstr(const char *big, const char *little, size_t len);

/*	° Compare s1 et s2.									**
**	° RETOUR : entier inferieur, egal ou superieur a 0	**
**	si s1 est inferieur, egal ou superieur a s2.		*/
int		ft_strcmp(const char *s1, const char *s2);

/*	° Compare les n premiers octets de s1 et s2.					**
**	° RETOUR : entier inferieur, egal ou superieur a 0 si les n		**
**	premiers octets de s1 sont inferieur, egal ou superieur a s2.	*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*	° Convertit le debut de la chaine pointee par nptr en entier de type int.	**
**	(Identique a strtol sauf qu'atoi ne detecte pas d'erreur).					**
**	Cf man strtol et man isspace.												**
**	° RETOUR : l'entier de type int												*/
int		ft_atoi(const char *nptr);

/*	° Verifie si l'on a un caractere alphabetique.						**
**	Equivalent a (isupper(c) || islower(c)).							**
**	° RETOUR : non nulle si c entre dans la categorie testee sinon 0.	*/
int		ft_isalpha(int c);

/*	° Verifie si l'on a un chiffre (0 a 9).								**
**	° RETOUR : non nulle si c entre dans la categorie testee sinon 0.	*/
int		ft_isdigit(int c);

/*	° Verifie si l'on a un caractere alphanumerique.					**
**	Equivalent a (isalpha(c) || isdigit(c)).							**
**	° RETOUR : non nulle si c entre dans la categorie testee sinon 0.	*/
int		ft_isalnum(int c);

/*	° Verifie si c est un unsigned char sur 7bits,						**
**	entrant dans le jeu de caracteres ASCII.							**
**	° RETOUR : non nulle si c entre dans la categorie testee sinon 0.	*/
int		ft_isascii(int c);

/*	° Verifie si l'on a un caractere imprimable (y compris l'espace).	**
**	° RETOUR : non nulle si c entre dans la categorie testee sinon 0.	*/
int		ft_isprint(int c);

/*	° Convertit la lettre c en majuscule si c'est possible	**
**	° RETOUR : lettre convertie ou c si						**
**	la conversion n'etait pas possible						*/
int		ft_toupper(int c);

/*	° Convertit la lettre c en minuscule si c'est possible	**
**	° RETOUR : lettre convertie ou c si						**
**	la conversion n'etait pas possible						*/
int		ft_tolower(int c);

#endif
