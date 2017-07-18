#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

void	ft_putchar(char c)
{write(1,&c,1);}

int main(int argc, char **argv)
{
	char **arr;
	argc = 0;
	argv[0][0] = 0;
	arr = ft_split_whitespaces(argv[1]);
	ft_print_words_tables(arr);
	return (0);
}
