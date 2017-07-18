#include<stdio.h>
char	*ft_strcapitalize(char *str);
int	main()
{
	char a[] = "salut, comment tu vAs ? 42mOts qUARante-deux; cinquante+et+un";
	char *p = a;
	printf("%s",ft_strcapitalize(p));
	return (0);
}	
