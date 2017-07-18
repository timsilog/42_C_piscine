#include<stdio.h>
char	*ft_strlowcase(char *str);
int main()
{
	char a[] = "&%yb$#$Aa%\\/StRiNg tEsT !";
	char *p = a;
	printf("%s",ft_strlowcase(p));
	return (0);
}
