#include<stdio.h>
char	*ft_strstr(char *str, char *to_find);
int main()
{
	char str[] = "this is a string and this is the rest";
	char find[] = "fdfd";
	char *p1 = str;
	char *p2 = find;
	char *p3 = ft_strstr(p1,p2);
	printf("%s",p3);
	return 0;
}
