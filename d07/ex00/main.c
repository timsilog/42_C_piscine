#include<stdio.h>
char	*ft_strdup(char *src);
int main(int argc, char **argv)
{
	argc = 0;
	printf ("%s",ft_strdup(argv[1]));
		return 0;	
}