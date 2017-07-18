#include<stdio.h>
#include<string.h>
char	*ft_strcat(char *dest, char *src);
int main()
{
	char a[5] = "this";
	char b[] = "sdasdasd";
	char *p1 = a;
	char *p2 = b;
	printf("%s\n",strcat(p1,p1));
	printf("%s",ft_strcat(p1,p2));
	return 0;
}

