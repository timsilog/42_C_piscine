#include<stdio.h>
int	ft_strcmp(char *s1, char *s2);
int main()
{
	char str1[] = "";
	char str2[] = "";
	char *p1 = str1;
	char *p2 = str2;
	printf("%d",ft_strcmp(p1,p2));
	return 0;
}
