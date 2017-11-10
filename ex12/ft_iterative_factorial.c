int	ft_iterative_factorial(int nb)
{
	int	result;

	if(nb >= 0 && nb < 13)
	{
		if(nb == 0)
			result = 1;
		else
		{
			result = nb;
			while(nb > 1)
			{
				result *= (nb - 1);
				nb--;
			}
		}
	}
	else
		result = 0;
	return result;
}
