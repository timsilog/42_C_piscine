#include<unistd.h>
void	ft_putstr(char *str);
void	ft_putchar(char c)
{
	write(1,&c,1);
}
int main()
{
	char s[] = "a string!   0 ##";
	char *p = s;
	ft_putstr(p);
	return (0);
}
