#include <stdlib.h>

int		f_random(int bound)
{
	int rand;

	rand = arc4random_uniform(bound + 1);
	return(rand);
}
