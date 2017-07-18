#include <unistd.h>
#include<stdio.h>
void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c)
{
	write (1,&c,1);
}
int		main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return 0;
}
