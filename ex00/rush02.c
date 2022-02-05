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

void	ft_putchar(char c);
void	ft_print_line(char arr[], int len);
void	populate(char arr[], char start_end , char mid_char, int len);

void rush(int width, int height)
{
	if (width <= 0 || height <= 0)
		return;

	int offset;
	char first_line[width];
	char middle_lines[width];
	char last_line[width];

	//1. Populate the first_line.
	populate(first_line, 'A', 'B', width);
	//1. Populate the middle lines*
	populate(middle_lines, 'B', ' ', width);
	//3. Populate the last_line
	populate(last_line, 'C', 'B', width);

	//Print the first line
	ft_print_line(first_line, width - 1);
	ft_putchar('\n');
	//Print the middle line(s)
	offset = 0;
	while (offset <= height - 3)
	{
		ft_print_line(middle_lines, width - 1);
		ft_putchar('\n');
		offset++;
	}

	if (height > 2){
		ft_print_line(last_line, width - 1);
		ft_putchar('\n');
	}
}

void	populate(char arr[], char start_end , char mid_char, int len)
{
	int offset;

	arr[0] = start_end;
	arr[len-1] = start_end;
	offset = 1;
	while (offset <= len - 2)
	{
		arr[offset] = mid_char;
		offset++;
	}
}

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
