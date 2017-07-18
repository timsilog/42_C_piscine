#include<stdio.h>
char	*ft_strupcase(char *str);
int main()
{
	char a[] = "&%yb$#$a%\\/string tEsT !";
	char *p = a;
	printf("%s",ft_strupcase(p));
	return (0);
}
