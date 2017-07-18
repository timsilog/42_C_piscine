#include <stdio.h>
int ft_sqrt(int nb);
int main()
{
	int i = 0;
	i = ft_sqrt(100);
	printf("%d ",i);
	i = ft_sqrt(52);
	printf("%d ",i);
	i=ft_sqrt(-1);
	printf("%d ",i);
	i=ft_sqrt(2147395602);
	printf("%d ",i);
	return (0);


}
