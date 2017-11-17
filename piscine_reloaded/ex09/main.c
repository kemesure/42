#include <stdio.h>

void	ft_ft(int *);

int	main()
{
	int	nbr;

	nbr = 21;
	printf("%d\n", nbr);
	ft_ft(&nbr);
	printf("%d\n", nbr);
	return 0;
}
