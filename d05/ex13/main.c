#include<stdio.h>
int		ft_str_is_lowercase(char *str);
int main()
{
	char a[] = "asd";
	char b[] = "";
	char c[] = "dwqe dad";
	char *p1, *p2, *p3;
	p1 = a;
	p2 = b;
	p3 = c;
	printf("%d\n",ft_str_is_lowercase(p1));
	printf("%d\n",ft_str_is_lowercase(p2));
	printf("%d\n",ft_str_is_lowercase(p3));
	return 0;
}
