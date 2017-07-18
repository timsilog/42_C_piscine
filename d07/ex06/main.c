#include <stdio.h>
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int main()
{
	char *a = ft_convert_base("3267251","01234567","0123456789ABCDEF");
	printf("%s",a);
	return 0;
}
