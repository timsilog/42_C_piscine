#include<unistd.h>
void	ft_putnbr(int nb);
void	ft_putchar(char c)
{
	write(1,&c,1);
}

int main()
{
	ft_putnbr(31002);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2000);
	return (0);
}
