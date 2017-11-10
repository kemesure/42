int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	while(n * n <= nb)
	{
		if(n * n == nb)
			return n;
		n++;
	}
	return 0;
/*
	int	racine;
	int	sqrt;

	racine = 1;
	sqrt = 0;
	while(racine <= nb / 2)
	{
		sqrt = racine * racine;
		if(sqrt == nb)
			return racine;
		racine++;
	}
	return 0;
*/}
