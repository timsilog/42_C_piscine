#include<stdio.h>
#include<unistd.h>
int	ft_eight_queens_puzzle_2(void);

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int main()
{
	ft_eight_queens_puzzle_2();
	return (0);

}
