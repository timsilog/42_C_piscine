#include<stdio.h>

int	ft_find_next_prime(int nb);

int main()
{
	int i = 300000100;
	i = ft_find_next_prime(i);
	printf("%d",i);
	return 0;
}
