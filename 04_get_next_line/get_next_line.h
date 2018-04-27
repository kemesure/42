/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 17:25:15 by kemesure          #+#    #+#             */
/*   Updated: 2018/04/27 14:27:33 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
# include "./libft/includes/libft.h"
# include <fcntl.h>
# include <unistd.h>
# define BUFF_SIZE 32

typedef struct		s_struct
{
	int				nbc;
	char			*buff;
}					t_struct;

#endif
