#include <stdio.h>
int ft_fibonacci(int index);
int main()
{
	int n;
	n = ft_fibonacci(8);
	printf("%d ",n);
	n = ft_fibonacci(-1);
	printf("%d ",n);
	n = ft_fibonacci(40);
	printf("%d ",n);
	return (0);
}
