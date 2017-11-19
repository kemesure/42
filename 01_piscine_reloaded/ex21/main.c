
#include <stdio.h>

int		*ft_range(int min, int max);

int		main()
{
	int		*tab;
	int		i;
	int		min;
	int		max;

	min = 1;
	max = 43;
	tab = ft_range(min, max);
	for (i = 0 ; i < max - min ; i++)
		printf("%d ", tab[i]);
	printf("\n");
	return (0);
}
