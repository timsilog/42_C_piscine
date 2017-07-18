/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:45:31 by yli               #+#    #+#             */
/*   Updated: 2016/11/15 19:34:09 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

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
		while (is_safe_square(*puzzle, i, ch, dimension))
			dimension++;
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
	printf("%s&&&&&&&&&",puzzle);
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


void	get_chars(char *puzzle, int ch[5], int width) //get height, empty, obstacle, and fill characters
{
	int holder;
	int i;
	int j;

	j = 2;
	i = 0;
	holder = 0;
	while (i < width - 4) //get first number
	{
		holder = holder * 10 + (puzzle[i] - '0');
		i++;
	}
	ch[1] = holder;
	while (j < 5) // get rest of characters
	{
		ch[j] = puzzle[i];
		i++;
		j++;
	}
}

int		proc_line1(int ch[5], char *puzzle) // Process the first line
{
	int		width1;

	width1 = 0;
	while (puzzle[width1] != '\0')
		width1++;
	get_chars(puzzle, ch, width1); // fill ch[5]
	return (width1);
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
	if (c == ch[2] || c == ch[3] || c == ch[4] || c == '\n' || '\0')
		return (1);
	return (0);
}

int		is_valid(char *puzzle, int ch[5])
{
	int i;
	int width;
	int j;
	int height;

	i = -1;
	height = 0;
	width = get_width(puzzle);
	while (puzzle[++i])
	{
		j = 0;
		while (puzzle[i] != '\n')
		{
			if (!is_ch(puzzle[i++], ch)) // if there's an invalid character
				return (0);
			j++; //current width increment
		}
		if (++j != width)
			return (0); //if the row has a different sized width
		height++;
	}
	if (height != ch[1]) // if the height doesn't match the given height
		return (0);
	return (1);
}

int		prepare_puzzle(char *puzzle, char *line1)
{// process first line and check if puzzle is valid	
	int		i;
	int		ch[5];
	int		first_line;

	i = 0;
	first_line = proc_line1(ch, line1); // process the first line which has the info we need
	if (is_valid(puzzle, ch)) // check if the puzzle is even valid
	{
		ch[0] = get_width(puzzle);
		solve_it(puzzle, ch); //SOLVE IT!!!
		return (1);
	}
	return (0);
}

char	*get_first_line(int from)
{
	char	buff[2];
	char	*first_line;
	int		i;

	i = 0;
	first_line = malloc(sizeof(char) * 25);
	while (*buff != '\n')
	{
		read(from, buff, 1);
		first_line[i] = *buff;
		i++;
	}
	first_line[i] = '\0';
	return (first_line);
}



void	file_loop(char *file)
{// if files were passed in
	char	*ptr;
	char	*line1;
	char	buff[10001];
	int		fd;
	int		ret;

	ptr = NULL;
	ptr = malloc(sizeof(char) * 10000001);
	fd = open(file, O_RDONLY);
	line1 = get_first_line(fd);
	while ((ret = read(fd, buff, 10000)))
	{
		buff[ret] = '\0';
		ptr = ft_strcat(ptr, buff);
	}
	if (!prepare_puzzle(ptr, line1))
		ft_putstr("map error\n", 2);
	free(ptr);
	*ptr = '\0';
	free(line1);
	close(fd);
}

void	do_stdin(void)
{
	char	buff[10001];
	char	*ptr;
	int		ret;
	char	*line1;

	ptr = malloc(sizeof(char) * 10000001);
	line1 = get_first_line(0);
	while((ret = read(0, buff, 10000)))
	{
		buff[ret] = '\0';
		ptr = ft_strcat(ptr, buff);
	}
	if(!prepare_puzzle(ptr, line1))
		ft_putstr("map error\n", 2);
	free(line1);
	free(ptr);
	*ptr = '\0';
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2) // if no arguments
		do_stdin();
	else // there's files in argv
	{
		while (i < argc)
		{
			file_loop(argv[i]);
			i++;
		}
	}
	return (0);
}
