#include <stdio.h>

int	ft_atoi(char *str);

int main()
{
	char str[] = "1234576";
	char *s = str;
	int n = ft_atoi(s);
	printf("%d",n);
	
	return 0;
}

