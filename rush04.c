/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:43:25 by coder             #+#    #+#             */
/*   Updated: 2022/02/04 23:43:25 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y)
{
	int lines;
	int cols;

	lines = 1;
	while(lines < x)
	{
		cols = 0;
		while(cols < y)
		{
			if((lines == 1 && cols == 0) || (lines == x && cols == y))
				ft_putchar('A');
			else if((lines == 1 && cols == y) || (lines == x && cols == 0))
				ft_putchar('C');
			else if(lines == 1  && cols != 0 && cols != y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		cols++;
		}
		ft_putchar('\n');
	lines++;
	}
}
