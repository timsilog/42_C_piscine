#include<stdio.h>
int ft_is_prime(int nb);

int main()
{
	int i = 2;

	i = ft_is_prime(0);
	printf("%d ",i);
	i = ft_is_prime(1);
	printf("%d ",i);

i = ft_is_prime(-40);
	printf("%d ",i);

i = ft_is_prime(7);
	printf("%d ",i);

i = ft_is_prime(2000000001);
	printf("%d ",i);

	return 0;
}






