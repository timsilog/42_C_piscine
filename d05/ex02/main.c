#include<stdio.h>
int	ft_atoi(char *str);
int main()
{
	printf("%d\n", ft_atoi("--467"));
	printf("%d\n", ft_atoi("\t\n\v\f\r 0321"));
	printf("%d\n", ft_atoi("    -01000"));
	printf("%d\n", ft_atoi("-75043"));
	printf("%d\n", ft_atoi("-214748a3648"));
	return (0);
}
