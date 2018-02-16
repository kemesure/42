#include "../libft/libft.h"
# define POSITION				grid[x][y]
# define TRANSPOSITION			x = position / 4; \
								y = position % 4;
# define PUT_HASH				grid[x][y] = '#';
# define SET_HASH(position)		x = position / 4; \
								y = position % 4; \
								grid[x][y] = '#';

int			f_random(int bound);

int			ft_count_hashs(char **grid)
{
	int		position;
	int		nb_of_hashs;
	int		x;
	int		y;

	position = -1;
	nb_of_hashs = 0;
	while (++position <= 15)
	{
		TRANSPOSITION
		if (POSITION == '#')
			nb_of_hashs++;
	}
	return (nb_of_hashs);
}

char		**ft_generate_grid(void)
{
	char	**grid;
	int		index_grid;
	int		x;
	int		y;
	int		jukebox;

	index_grid = -1;
	grid = (char **)malloc(sizeof(*grid) * (4 + 1));
	while (++index_grid < 4)
	{
		grid[index_grid] = ft_memalloc(4);
		ft_memset(grid[index_grid], '.', 4);
	}
	grid[index_grid]= NULL;
	SET_HASH(f_random(15));
	while (ft_count_hashs(grid) != 4)
	{
		jukebox = f_random(3) % 2;
		if (jukebox)
			(y == 3) ? y-- : y++;
		else
			(x == 3) ? x-- : x++;
		PUT_HASH;
	}
	return (grid);
}

int			main(int argc, char *argv[])
{
	char	**grid;
	int		nb_of_grids;
	int		max_grids;

	if (argc != 2)
	{
		ft_putstr_fd("usage: ", 2);
		ft_putstr_fd(argv[0], 2);
		ft_putstr_fd(" number_of_grids\n", 2);
		return (10);
	}
	max_grids = ft_atoi((const char *)argv[1]);
	if (!(nb_of_grids = max_grids) || max_grids > 26)
	{
		ft_putstr_fd("error: ", 2);
		ft_putstr_fd("the argument must be a digit between 1 & 26\n", 2);
		return (26);
	}
	while (nb_of_grids--)
	{
		if (!(grid = ft_generate_grid()))
			return (20);
		while (*grid)
			ft_putendl(*grid++);
		if (nb_of_grids)
			ft_putchar('\n');
	}
	return (0);
}
