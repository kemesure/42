/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 16:46:49 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/19 17:03:32 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int(*f)(char*));
int		ft_strlen(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_count_if(argv, &ft_strlen));
	return 0;
}
