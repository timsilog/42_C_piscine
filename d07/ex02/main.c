#include<stdio.h>
int ft_ultimate_range(int **range, int min, int max);
int main()
{
	int i = 0;
	int *a;
	int min = -32;
	int max = 110;
	int **range = &a;
	ft_ultimate_range(range, min, max);
	while (i < max - min)
	{
		printf("%d, ",(*range)[i]);
		i++;
	}
	return 0;
}
