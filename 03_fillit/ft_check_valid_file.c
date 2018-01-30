/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid_file.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 12:27:40 by kemesure          #+#    #+#             */
/*   Updated: 2018/01/30 13:56:05 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
**	Si le fichier contient des caracteres '.', '#' et '\n' c'est bon.
**	Sinon, si il contient d'autres caracteres la fonction return -1.
**	Si il y a 4 '#' c'est bon.
**	Sinon la fonction return -1.
**	Si les 4 '#' correspondent a une des 19 pieces valides la fonction return 0.
**	Sinon la fonction return -1.
*/

/*
**	"....\n####\n....\n....\n\n##..\n.##.\n....\n....\n\n"
**	"01234 56789 01234 56789 0 12345 67890 12345 67890 1 "
**	"0           1           2           3           4   "
**	--------------------------||--------------------------
**	"....\n..#.\n.##.\n..#.\n\n....\n#...\n##..\n#...\n\0"
**	"23456 78901 23456 78901 2 34567 89012 34567 89012 3 "
**	"         5           6            7           8     "
*/
int		ft_check_valid_file(int fd)
{
	unsigned char	buf;
	int				i;
	int				j;
	int				diese;

	diese = 0;
	ft_memset(buf, '0', 1); // initialisation de buf a '0'
//	read(fd, &buf, 1); // buf = '.'
//	if (buf != '.' && buf != '#' && buf != '\n') // faux
//		return (-1);
//	else if (buf == "#")
//		++diese;
	i = 0;
	j = 0;
	// tant qu'on a pas fini de lire tout le fichier
	while (i + j < 84 && buf != '\0') // 63 < 84 && buf = '\n' donc VRAI
	{
		// tant que la piece de tetriminos n'a pas fini d'etre lue
		// Modification de while (i + 1 % 23 != 0) par :
		while (i + j + 1 % 21 != 0) // 84 % 21 = 0
		{
			// tant que la ligne n'a pas finie d'etre lue
			while (i + 1 % 5 != 0) // 80 % 5 = 0
			{
				read(fd, &buf, 1); // buf = '.'
				if (buf != '.' && buf != '#') // FAUX
					return (-1);
				else if (buf == "#") // FAUX
					++diese; // diese = 4
				++i; // i = 79
			}
			read(fd, &buf, 1); // buf = '\n'
			if (buf != '\n')
				return (-1);
			++i; // i = 80
		}
		read(fd, &buf, 1); // buf = '\0'
		if (diese != 4) // FAUX diese = 4
			return (-1);
		// Si tout vas bien
		else if (i + j + 1 == 84 && buf == '\0') // VRAI
			return (0); // -----------------------------> RETURN 0
		if (buf != '\n')
			return (-1);
		diese = 0;
		++j; // j = 3
	}
}

/* 113 possibillitees pour seulement 19 pieces
________________________________________________________________________ 4 * 2
1	####	....	....	....
	....	####	....	....
	....	....	####	....
	....	....	....	####

2	#...	.#..	..#.	...#
	#...	.#..	..#.	...#
	#...	.#..	..#.	...#
	#...	.#..	..#.	...#
________________________________________________________________________ 6 * 2
3	.##.	..##	....	....	....	....
	##..	.##.	.##.	..##	....	....
	....	....	##..	.##.	.##.	..##
	....	....	....	....	##..	.##.

4	#...	.#..	..#.	....	....	....
	##..	.##.	..##	#...	.#..	..#.
	.#..	..#.	...#	##..	.##.	..##
	....	....	....	.#..	..#.	...#
________________________________________________________________________ 6 * 2
5	##..	.##.	....	....	....	....
	.##.	..##	##..	.##.	....	....
	....	....	.##.	..##	##..	.##.
	....	....	....	....	.##.	..##

6	.#..	..#.	...#	....	....	....
	##..	.##.	..##	.#..	..#.	...#
	#...	.#..	..#.	##..	.##.	..##
	....	....	....	#...	.#..	..#.
________________________________________________________________________ 9
7	##..	.##.	..##	....	....	....	....	....	....
	##..	.##.	..##	##..	.##.	..##	....	....	....
	....	....	....	##..	.##.	..##	##..	.##.	..##
	....	....	....	....	....	....	##..	.##.	..##
________________________________________________________________________ 6 * 4
8	#...	.#..	..#.	....	....	....
	#...	.#..	..#.	#...	.#..	..#.
	##..	.##.	..##	#...	.#..	..#.
	....	....	....	##..	.##.	..##

9	###.	.###	....	....	....	....
	#...	.#..	###.	.###	....	....
	....	....	#...	.#..	###.	.###
	....	....	....	....	#...	.#..

10	##..	.##.	..##	....	....	....
	.#..	..#.	...#	##..	.##.	..##
	.#..	..#.	...#	.#..	..#.	...#
	....	....	....	.#..	..#.	...#

11	..#.	...#	....	....	....	....
	###.	.###	..#.	...#	....	....
	....	....	###.	.###	..#.	...#
	....	....	....	....	###.	.###
________________________________________________________________________ 6 * 4
12	.#..	..#.	...#	....	....	....
	.#..	..#.	...#	.#..	..#.	...#
	##..	.##.	..##	.#..	..#.	...#
	....	....	....	##..	.##.	..##

13	#...	.#..	....	....	....	....
	###.	.###	#...	.#..	....	....
	....	....	###.	.###	#...	.#..
	....	....	....	....	###.	.###

14	##..	.##.	..##	....	....	....
	#...	.#..	..#.	##..	.##.	..##
	#...	.#..	..#.	#...	.#..	..#.
	....	....	....	#...	.#..	..#.

15	###.	.###	....	....	....	....
	..#.	...#	###.	.###	....	....
	....	....	..#.	...#	###.	.###
	....	....	....	....	..#.	...#
________________________________________________________________________ 6 * 4
16	###.	.###	....	....	....	....
	.#..	..#.	###.	.###	....	....
	....	....	.#..	..#.	###.	.###
	....	....	....	....	.#..	..#.

17	.#..	..#.	...#	....	....	....
	##..	.##.	..##	.#..	..#.	...#
	.#..	..#.	...#	##..	.##.	..##
	....	....	....	.#..	..#.	...#

18	.#..	..#.	....	....	....	....
	###.	.###	.#..	..#.	....	....
	....	....	###.	.###	.#..	..#.
	....	....	....	....	###.	.###

19	#...	.#..	..#.	....	....	....
	##..	.##.	..##	#...	.#..	..#.
	#...	.#..	..#.	##..	.##.	..##
	....	....	....	#...	.#..	..#.
*/
