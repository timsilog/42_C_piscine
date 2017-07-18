/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:45:31 by yli               #+#    #+#             */
/*   Updated: 2016/11/15 13:54:03 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>///////////////////////

/* ch[0] = width
 * ch[1] = height
 * ch[2] = empty char
 * ch[3] = obstacle
 * ch[4] = fill char
*/

int		is_safe_row(char *puzzle, int i, int ch[5], int dimension)
{ // we check if we can fill this row with fill characters
	int j;

	j = i + dimension; //check up to this point
	while (i < j)
	{
		if (puzzle[i] != ch[2]) // if slot isn't empty return false
			return (0);
		i++;
	}
	return (1);
}

int		is_safe_col(char *puzzle, int i, int ch[5], int dimension)
{ // we check if we can fill this column with fill characters
	int j;

	j = i + ch[0] * dimension; // check up to this point
	if (j / ch[0] > ch[1]) //if target row goes beyond last (j / width > height)
		return (0);
	while (i < j)
	{
		if (i / ch[0] > ch[1]) //if current row goes beyond the last (i < width > height)
			return (0);
		if (puzzle[i] != ch[2]) // if slot isn't empty
			return (0);
		i += ch[0]; // add width to go to next row in this column
	}
	return (1);
}

void	print_solution(char *puzzle, int dimension, int start, int ch[5])
{
	int i;
	int j;

	i = -1;
	printf("dimension = %d\nstart coordinate = %d\n", dimension, start);//////////////////
	while (++i < dimension)
	{
		j = -1;
		while (++j < dimension)
		{
			puzzle[start] = ch[4]; //fill up this row
			start++;
		}
		start = start + ch[0] - dimension; //add width  and subtract dimension to go to next row
	}
	ft_putstr(puzzle, 1); //THATS IT BABY PRINT THAT SHIT
}

int		is_safe_square(char *puzzle, int start, int ch[5], int dimension)
{ // check if the square of [dimension x dimension] has all empty characters and doesn't go outside the boundry of the map.We always start with the top left and work our way down to the bottom right.
	int i;
	int j;
	
	i = -1;
	while (++i < dimension)
	{
		if (start / ch[0] > ch[1]) // if our current coordinate goes beyond the last row (current spot / width > height)
			return (0);
		j = -1;
		while (++j < dimension)
		{
			if (puzzle[start] != ch[2]) // if current spot is not an empty character
				return (0);
			start++;
		}
		start = start + ch[0] - dimension; // add width to go to next column
	}
	return (1);
}


int		find_biggest_square(char **puzzle, int i, int ch[5], int dimension)
{// find the largest square we can fit at this coordinate
	if ((*puzzle)[i + ch[0] * dimension - 1] < ch[0] * ch[1] + ch[1] + 1)// if next row exists
	{
		/*if (is_safe_row(*puzzle, i + ch[0] * (dimension - 1), ch, dimension) &&
					is_safe_col(*puzzle, i + (dimension - 1), ch, dimension)) //if both row and col are safe*/
		if (is_safe_square(*puzzle, i, ch, dimension))
		{
			dimension = find_biggest_square(puzzle, i, ch, dimension + 1); // try next dimension
			return (dimension); // recursively return the largest dimension we found
		}
	}
	dimension--; // else go back to prevous dimension and return it
	return (dimension);
}

void	solve_it(char *puzzle, int ch[5])
{
	int i;
	int largest;
	int check;
	int	coordinate;

	i = 0;
	largest = 1;
	while (puzzle[i])
	{
		if (puzzle[i] == ch[2]) // is empty char
		{
			check = find_biggest_square(&puzzle, i, ch, largest); // find biggest square from this coordinate going down and right, starting with a 2x2
			if (check > largest) // if the biggest square in this spot is larger than what we've found so far, save it's dimensions and coordinate
			{
				largest = check;
				coordinate = i;
				printf("largest was: %d\nat coordinate: %d\n",largest,coordinate);///////////////////
			}
			i++;
		}
		else
			i++; //move to next spot
	}
	print_solution(puzzle, largest, coordinate, ch); // THE FINAL STRETCH
}

int		ft_pow(int num, int n)
{
	int i;
	int holder;

	i = 0;
	holder = 1;
	if (n == 0)
		return (1);
	while (i < n)
	{
		holder *= num;
		i++;
	}
	return (holder);
}

void	get_chars(t_list *temp, int ch[5]) //get height, empty, obstacle, and fill characters
{
	int holder;
	int i;
	int j;

	j = 0;
	i = 4;
	holder = 0;
	while (temp)
	{
		if (i == 1)
		{
			while (temp) //converts the rest of the numbers into the height of the map
			{
				holder += (temp->data - '0') * ft_pow(10, j++);
				temp = temp->next;
			}
			ch[1] = holder;
		}
		else //gets the last 3 characters (empty, obstacle, and fill)
		{
			ch[i] = temp->data;
			i--;
			temp = temp->next;
		}
	}
}

int		proc_line1(int ch[5], t_list **list) // Process the first line
{
	t_list	*temp;
	int		first_line;

	first_line = 0;
	temp = 0;
	while ((*list)->data != '\n') // increment the linked list past the first line
	{
		ft_list_push_front(&temp, (*list)->data); // save the first line in reverse on a "temp" linked list
		first_line++;
		*list = (*list)->next;
	}
	*list=(*list)->next; // increment past the newline
	get_chars(temp, ch); // convert the "temp" linked list into ch[5]
	ft_list_clear(&temp); // free "temp"
	return (first_line); // return width of first line
}

int		get_width(char *puzzle)
{
	int i;

	i = 0;
	while (puzzle[i] != '\n')
		i++;
	return (i + 1);
}

int		is_ch(char c, int ch[5]) // check if given character is valid on the map
{
	if (c == ch[2] || c == ch[3] || c == ch[4] || c == '\n')
		return (1);
	return (0);
}

int		is_valid(char *puzzle, int ch[5])
{
	int i;
	int width;
	int j;
	int height;

	printf("%s\n",puzzle);///////////////////
	i = 0;
	height = 0;
	if (!puzzle[0]) // if the puzzle doesn't even exist
		return (0);
	width = get_width(puzzle);
	while (puzzle[i])
	{
		j = 0;
		while (puzzle[i] != '\n')
		{
			if (!is_ch(puzzle[i], ch)) // if there's an invalid character
				return (0);
			i++; //position increment
			j++; //current width increment
		}
		if (++j != width)
			return (0); //if the row has a different sized width
		height++;
		i++; // increment past '\n'
	}
	if (height != ch[1]) // if the height doesn't match the given height
		return (0);
	return (1);
}

int		prepare_puzzle(t_list **list, int length)
{// copy the linked list into an array. then we pass the array into the actual solver
	char	*puzzle;
	int		i;
	int		first_line;
	int		ch[5];

	i = 0;
	first_line = proc_line1(ch, list); // process the first line which has the info we need
	puzzle = malloc(sizeof(char) * length + 1 - first_line);
	while ((*list)) // copy the linked list into our arrays
	{
		puzzle[i] = (*list)->data;
		i++;
		*list = (*list)->next;
	}
	puzzle[i] = '\0';
	ft_list_clear(list); // free the linked list
	if (is_valid(puzzle, ch)) // check if the puzzle is even valid
	{
		ch[0] = get_width(puzzle);
		solve_it(puzzle, ch); //SOLVE IT!!!
		return (1);
	}
	return (0);
}

void	file_loop(char **argv, t_list **puzzle, int length, int argc)
{// if files were passed in
	int 	i;
	char	buff[1];
	int		fd;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		while ((read(fd, buff, 1)))
		{
			length++;
			ft_list_push_back(puzzle, *buff);
		}
		if (!prepare_puzzle(puzzle, length))
			ft_putstr("map error\n", 2);
		i++;
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	char	buff[1];
	int		length;
	t_list	*puzzle;

	length = 0;
	if (argc < 2) // if no arguments
	{
		while ((read(0, buff, 1)))
		{
			length++;
			ft_list_push_back(&puzzle, *buff);
		}
		if(!prepare_puzzle(&puzzle, length))
			ft_putstr("map error\n", 2);
	}
	else // there's files in argv
		file_loop(argv, &puzzle, length, argc);
	return (0);
}
