#include<stdio.h>
int	*ft_range(int min, int max);
int main()
{
	int min;
	int max;

	min = 1;
	max = 100;
	int i = 0;
	int *x = ft_range(min,max);
	while (i < max - min)
	{
		printf("%d, ",x[i++]);
	}
	return 0;
}
