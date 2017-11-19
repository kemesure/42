
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main()
{
	printf("   strdup : %s\n", strdup("Bonjour"));
	printf("ft_strdup : %s\n", ft_strdup("Bonjour"));
	return (0);
}
