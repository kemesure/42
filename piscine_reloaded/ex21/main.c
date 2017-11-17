
#include <stdio.h>

int		*ft_range(int min, int max);

int		main()
{
	int		*tab;
	int		i;
	int		min;
	int		max;

	min = 0;
	max = 42;
	tab = ft_range(min, max);
	printf("|");
	for (i = 0 ; i < max - min ; i++)
		printf(" %d |", tab[i]);
	printf("\n");
	return (0);
}
