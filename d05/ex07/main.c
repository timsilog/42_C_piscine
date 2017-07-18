#include<stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int main()
{
	char str1[] = "saaaaa";
	char str2[] = "saaaaa";
	char *p1 = str1;
	char *p2 = str2;
	printf("%d",ft_strncmp(p1,p2,4));
	return 0;
}
