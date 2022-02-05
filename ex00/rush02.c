/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:19:56 by lguedes           #+#    #+#             */
/*   Updated: 2022/02/04 21:26:07 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *  1st goal: see if I can create an array with the size equal as number given
 *  2nd goal: Print the first line based on the example [A x*b C]
 *
 *  AA
 *  BB
 *  BB
 *  CC
*/

void	ft_putchar(char c);
void	ft_print_line(char arr[], int len);

void rush(int width, int height)
{
	if (width <= 0 || height <= 0)
		return;

	int offset;
	char first_line[width];
	char middle_line[width];
	char last_line[width];


	//1. Populate the first_line.
	first_line[0] = 'A';
	first_line[width-1] = 'A';
	offset = 1;
	while (offset <= width - 2)
	{
		first_line[offset] = 'B';
		offset++;
	}

	//2. Populate the last_line
	last_line[0] = 'C';
	last_line[width-1] = 'C';
	offset = 1;
	while (offset <= width - 2)
	{
		last_line[offset] = 'B';
		offset++;
	}

	//3. Populate the middle lines*
	middle_line[0] = 'B';
	middle_line[width-1] = 'B';
	offset = 1;
	while (offset <= width - 2)
	{
		middle_line[offset] = ' ';
		offset++;
	}

	//print each line
	ft_print_line(first_line, width - 1);
	ft_putchar('\n');
	ft_print_line(middle_line, width - 1);
	ft_putchar('\n');
	ft_print_line(last_line, width - 1);
	ft_putchar('\n');


}


/* void populate(char arr[], char start_end , char mid_char) */
/* { */
/* 	arr[0] = 'A'; */
/* 	arr[width-1] = star_end; */
/* 	offset = 1; */
/* 	while (offset <= width - 2) */
/* 	{ */
/* 		arr[offset] = mid_char; */
/* 		offset++; */
/* 	} */
/* } */


void	ft_print_line(char arr[], int len)
{
	int offset;
	offset = 0;
	while (offset <= len)
	{
		ft_putchar(arr[offset]);
		offset++;
	}
}
