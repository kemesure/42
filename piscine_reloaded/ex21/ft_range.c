
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	tab = NULL;
	if (min < max)
	{
		tab = (int *)malloc(sizeof(int) * (max - min));
		while (min != max)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	return (tab);
}
