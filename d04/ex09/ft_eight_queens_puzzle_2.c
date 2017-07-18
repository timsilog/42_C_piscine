/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 16:34:38 by tjose             #+#    #+#             */
/*   Updated: 2016/10/29 18:15:58 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_display(char display[8], int row, int q_nbr)
{
	int i;

	i = 0;
	display[q_nbr] = row + 49;
	if (q_nbr == 7)
	{
		while (i < 8)
		{
			ft_putchar(display[i]);
			i++;
		}
		ft_putchar('\n');
	}
}

int		check_diag(int board[][8], int row, int q_nbr)
{
	int i;
	int j;

	i = row;
	j = q_nbr;
	while (i >= 0 && j >= 0)
	{
		if (board[i][j] == 1)
		{
			return (1);
		}
		i--;
		j--;
	}
	while (row < 8 && q_nbr >= 0)
	{
		if (board[row][q_nbr] == 1)
		{
			return (1);
		}
		row++;
		q_nbr--;
	}
	return (0);
}

int		safe(int board[][8], int row, int q_nbr)
{
	int i;
	int j;

	i = row;
	j = 0;
	while (j < q_nbr)
	{
		if (board[row][j] == 1)
		{
			return (0);
		}
		j++;
	}
	if (check_diag(board, row, q_nbr))
	{
		return (0);
	}
	return (1);
}

void	count_queens(int board[][8], int q_nbr, char display[8])
{
	int count;
	int row;

	row = 0;
	count = 0;
	if (q_nbr == 8)
	{
		return ;
	}
	while (row < 8)
	{
		if (safe(board, row, q_nbr))
		{
			board[row][q_nbr] = 1;
			display[q_nbr] = row + 49;
			check_display(display, row, q_nbr);
			count_queens(board, q_nbr + 1, display);
			board[row][q_nbr] = 0;
			display[q_nbr] = '0';
		}
		row++;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int		board[8][8];
	int		row;
	int		col;
	char	display[8];

	row = 0;
	col = 0;
	while (row < 8)
	{
		display[row++] = '0';
	}
	row = 0;
	while (row < 8)
	{
		while (col < 8)
		{
			board[row][col++] = 0;
		}
		row++;
		col = 0;
	}
	count_queens(board, 0, display);
}
