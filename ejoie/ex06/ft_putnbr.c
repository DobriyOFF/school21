#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	c;
	int l;

	c = nb;
	if (nb >= 10)
	{
		ft_putchar((nb / 10) + 48);
		while (nb >= 1)
		{
			ft_putchar((nb % 10) + 48);
			nb = nb / 10;
		}
	}
}

int main()
{
	ft_putnbr(4222);
	ft_putchar('\n');
	return(0);
}
