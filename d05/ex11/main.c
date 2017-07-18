#include<stdio.h>
int		ft_str_is_alpha(char *str);
int main()
{
	char a[] = "";
	char b[] = " asd";
	char c[] = "DSADAS D adaa";
	char *p1, *p2, *p3;
	p1 = a;
	p2 = b;
	p3 = c;
	printf("%d\n",ft_str_is_alpha(p1));
	printf("%d\n",ft_str_is_alpha(p2));
	printf("%d\n",ft_str_is_alpha(p3));
	return 0;
}
