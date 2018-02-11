/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 11:37:29 by kemesure          #+#    #+#             */
/*   Updated: 2018/02/10 14:15:54 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//                   PTR1                  ,               PTR2             ,  N
//"ligne 01\nl2\nln 03\nln04\nln5\nligne\0", "l2\nln 03\nln04\nln5\nligne\0", 24
//"012345678 901 234567 89012 3456 789012 ", "012 345678 90123 4567 890123 "
//"0          1           2           3   ", "0           1           2    "
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	if (src == dest)
		return (dest);
	i = 0;
	ptr1 = dest;
	ptr2 = (char *)src;
	while (i < n) // 0 < 28
	{
		ptr1[i] = ptr2[i];
		// ptr1 = "12\n\n\n1234567890\n\n1234567890\067890"
		i++;
	}
	return (dest);
}
