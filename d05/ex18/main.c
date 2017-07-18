#include<string.h>
#include<stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int main()
{
	char a[9] = "stringaa";
	char b[25] = "this is a ";
	char *p1 = a;
	char *p2 = b;
	//int i = strlcat(p2,p1,17);
	int i = ft_strlcat(p2, p1, 19);
	printf("%d\n%s",i,p2);
	return (0);
}
