#include<stdio.h>
#include<unistd.h>

char	*ft_strrev(char *str);

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int main()
{
	int i = 0;
	char s[] = "this is a string";
	char *rev = s;
	rev = ft_strrev(rev);
	while (rev[i] != '\0')
	{	
		ft_putchar(*(rev + i));
		i++;
	}
	return 0;
}
