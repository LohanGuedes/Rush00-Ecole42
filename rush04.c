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
void	rush(int y, int x)
{
	int lines;
	int cols;

	lines = 1;
	while(lines <= x)
	{
		cols = 1;
		while(cols <= y)
		{
			if((lines == 1 && cols == 1) || (lines == x && cols == y && lines != 1 && cols != 1))
				ft_putchar('A');
			else if((lines == 1 && cols == y) || (lines == x && cols == 1))
				ft_putchar('C');
			else if((lines == 1  && cols != 1 && cols != y)
            || (cols == 1 && lines != 1 && lines != x)
            || (cols == y && lines != 1 && lines != x)
            || (lines == x && cols != 1 && cols != y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		cols++;
		}
		ft_putchar('\n');
	lines++;
	}
}
