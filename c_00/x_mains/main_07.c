#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-2147463648);
	write(1, "\n", 1);
	ft_putnbr(-10000);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(-1);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(1);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(10000);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
}
