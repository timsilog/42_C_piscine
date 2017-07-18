#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int main()
{
	int i = 1405124360;
	ft_putnbr(i);
}


