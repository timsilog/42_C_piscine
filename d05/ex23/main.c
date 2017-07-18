#include <stdio.h>
#include <unistd.h>
void	ft_print_memory(void *addr, unsigned int size);
void	ft_putchar(char c)
{
	write(1,&c,1);
}
int main()
{
	char a[] = "Salut les aminch\fes c'est cool show mem on fait de truc terrible\n\v\r\t\v\n\v\n\v\n\v\n";
	void *b;
    b = &a;
	ft_print_memory(b,76);
	return 0;
}
