#include "libft/libft.h"

int main(int argc, const char *argv[])
{
	if (argc != 2)
	{
		ft_putstr_fd("usage: ", 2);
		ft_putstr_fd(argv[0], 2);
		ft_putendl_fd("tetriminos_file", 2);
		return (1);
	}
	
	return (0);
}
