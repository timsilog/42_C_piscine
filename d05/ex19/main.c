#include<stdio.h>
#include<string.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int main()
{
	char a[] = "this is junk";
	char b[] = "copy me";
	char *x = a;
	char *y = b;
	int i = ft_strlcpy(x,y,7);
//	int i = strlcpy(x,y,7);
	printf("%d\n%s",i,x);
	return 0;
}
