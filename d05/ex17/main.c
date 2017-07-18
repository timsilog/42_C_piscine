#include<stdio.h>
char	*ft_strncat(char *dest, char *src, int nb);
int main()
{
	char a[20] = "this";
	char b[] = " is a stringASDASD";
	char *p1 = a;
	char *p2 = b;
	printf("%s",ft_strncat(p1,p2,0));
	return 0;
}

