#include<stdio.h>
int		ft_str_is_printable(char *str);
int main()
{
	char a[] = "Aa a\n";
	char b[] = "";
	char c[] = {12, 13, 14};
	char *p1, *p2, *p3;
	p1 = a;
	p2 = b;
	p3 = c;
	printf("%d\n",ft_str_is_printable(p1));
	printf("%d\n",ft_str_is_printable(p2));
	printf("%d\n",ft_str_is_printable(p3));
	return 0;
}
