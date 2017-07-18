/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 13:32:29 by tjose             #+#    #+#             */
/*   Updated: 2016/10/29 16:14:40 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_diag(int board[][8], int row, int q_nbr)
{
	int i;
	int j;

	i = row;
	j = q_nbr;
	//check upper left diagnol
	while (i >= 0 && j >= 0)
	{
		if (board[i][j] == 1)
		{
			return (1);
		}
		i--;
		j--;
	}
	// check left diagnol
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
	// check current row
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
	// otherwise return 1
	return (1);
}
 
int		count_queens(int board[][8], int q_nbr)
{
	int count;
	int row;

	row = 0;
	count = 0;
	if (q_nbr == 8)
	{
		// all 8 queens are placed!
		// increment # of solutions by 1
		return (1);
	}
	while (row < 8)
	{
		if (safe(board, row, q_nbr))
		{
			//place a queen in current row
			//col is always queen number
			board[row][q_nbr] = 1;
			count += count_queens(board, q_nbr + 1);
			board[row][q_nbr] = 0;
		}
		row++;
	}
	return (count);
}

int		ft_eight_queens_puzzle(void)
{
	// make 8x8 board with 2d array
	int board[8][8];
	int row;
	int col;
	int results;

	row = 0;
	col = 0;
	results = 0;
	while (row < 8)
	{
		while (col < 8)
		{
			board[row][col++] = 0;
		}
		row++;
		col = 0;
	}
	// solve the puzzle
	results += count_queens(board, 0);
	return (results);
}
