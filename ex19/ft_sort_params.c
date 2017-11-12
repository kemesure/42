/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:19:03 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/12 18:39:07 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int argc, char *argv[])
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*swap;

	i = 1;
	l = (argc - 1) / 2 + 1;
	while (argv[i])
	{
		k = 0;
		while (argv[i][k])
		{
			if (argv[k + 1] < argv[k])
			{
				swap = argv[k];
				argv[k] = argv[k + 1];
				argv[k + 1] = swap;
			}
			k++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char *argv[])
{
	ft_sort_params(argc, argv);
	return (0);
}
