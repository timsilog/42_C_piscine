#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size);

int main()
{
	int a[] = {89,6,2,43,45,12,234,54,7,2345};
	int i = 0;
	int len;
	len = 10;
	ft_sort_integer_table(a,len);
while (i < len)
	{
		printf("%d ",a[i++]);
	}
	return 0;

}
