void	ft_putchar(char);

void	ft_print_numbers(void)
{
	char	nb;

	nb = '0';
	while(nb <= '9')
	{
		ft_putchar(nb);
		nb++;
	}
}
