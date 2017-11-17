#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main()
{
	int	a;
	int	b;

	a = 21;
	b = 42;
	printf("Avant\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_swap(&a, &b);
	printf("\nApres\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}
