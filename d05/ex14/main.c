#include<stdio.h>
int		ft_str_is_uppercase(char *str);
int main()
{
	char a[] = "ASD!";
	char b[] = "";
	char c[] = "dwqeDSA";
	char *p1, *p2, *p3;
	p1 = a;
	p2 = b;
	p3 = c;
	printf("%d\n",ft_str_is_uppercase(p1));
	printf("%d\n",ft_str_is_uppercase(p2));
	printf("%d\n",ft_str_is_uppercase(p3));
	return 0;
}
