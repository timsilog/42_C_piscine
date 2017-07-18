#include<stdio.h>
char	*ft_strcpy(char *dest, char *src);
int main()
{
	char str1[] = "";
	char str2[] = "asdas";
	char *p = str1;
	char *p2 = str2;
	printf("%s",ft_strcpy(p2,p));
	return (0);
}

