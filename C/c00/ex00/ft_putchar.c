#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	char	c;

	c = "c";
	ft_putchar(char c);
	printf ("%c", ft_putchar(char c));
	return (0);
}
*/
