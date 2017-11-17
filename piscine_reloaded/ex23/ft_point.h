/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 23:56:57 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/16 01:00:17 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_POINT_H__
# define __FT_POINT_H__

typedef struct	s_point
{
	int		x;
	int		y;
}				t_point;

void	set_point(t_point *point);

#endif