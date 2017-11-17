#include <stdio.h>

void	ft_is_negative(int);

int	main()
{
	ft_is_negative(-42);
	printf(" -42\n");

	ft_is_negative(0);
	printf(" 0\n");

	ft_is_negative(42);
	printf(" 42\n");
}
