/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 17:25:15 by kemesure          #+#    #+#             */
/*   Updated: 2018/02/22 14:24:46 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
/*
**	Fonctions autorisees : read, malloc et free
*/
# include "./libft/includes/libft.h"
# include <fcntl.h>
# include <unistd.h>
# define BUFF_SIZE 32

typedef struct		s_struct
{
	char			saved[BUFF_SIZE + 1];
	int				b1;
	int				b2;
}					t_struct;

#endif
