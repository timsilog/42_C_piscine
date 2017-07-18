#include<unistd.h>
void	ft_putnbrbase(int nbr, char *base);
void	ft_putchar(char c)
{
	write(1,&c,1);
}

int main()
{
	char a[] = "asd098";
	char *b = a;
	ft_putnbrbase(-5678,b);
	return 0;
}
