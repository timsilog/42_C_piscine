#include<stdio.h>
#include <stdlib.h>
char **ft_split_whitespaces(char *str);


/*int (is_whitespace(char c))
{
	if (c==' '||c=='\n'||c=='\v'||c=='\r'||c=='\t'||c=='\f')
		return (1);
	return (0);
}*/

int main(int argc, char **argv)
{
	char **arr;
	argc = 0;
	argv[0][0] = 0;
	arr = ft_split_whitespaces(argv[1]);
	int i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}
