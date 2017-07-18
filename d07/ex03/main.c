#include<stdio.h>
char *ft_concat_params(int argc, char **argv);
int main(int argc, char **argv)
{
	char* arr;
	arr = ft_concat_params(argc, argv);
	printf("%s",arr);
	return 0;
}
