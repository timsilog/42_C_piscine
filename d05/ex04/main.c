#include<stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int main()
{
	char s1[] = "this is a stringasddasda";
	char s2[] = "onthenetepisodeonfa";
	char *p1 = s1;
	char *p2 = s2;
	//ft_strncpy(p2, p1, 5);
	printf("%s", ft_strncpy(p2,p1,8));
	return 0;
}
