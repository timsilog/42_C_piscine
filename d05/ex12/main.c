#include<stdio.h>
int		ft_str_is_numeric(char *str);
int main()
{
	char a[] = "\3213";
	char b[] = "";
	char c[] = "321 d321";
	char *p1, *p2, *p3;
	p1 = a;
	p2 = b;
	p3 = c;
	printf("%d\n",ft_str_is_numeric(p1));
	printf("%d\n",ft_str_is_numeric(p2));
	printf("%d\n",ft_str_is_numeric(p3));
	return 0;
}
