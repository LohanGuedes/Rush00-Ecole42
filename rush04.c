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
// y > z > x // x > y
void	ft_putchar(char c);
void	rush(int x, int y)
{
	int lines;
	int cols;

    if (x < 1 || y < 1)
    {
        return;
    }

	lines = 1;
	while(lines <= y)
	{
		cols = 1;
		while(cols <= x)
		{
			if((lines == 1 && cols == 1) || (lines == y && cols == x && lines != 1 && cols != 1))
				ft_putchar('A');
			else if((lines == 1 && cols == x) || (lines == y && cols == 1))
				ft_putchar('C');
			else if((lines == 1  && cols != 1 && cols != x)
            || (cols == 1 && lines != 1 && lines != y)
            || (cols == x && lines != 1 && lines != y)
            || (lines == y && cols != 1 && cols != x))
				ft_putchar('B');
			else
				ft_putchar(' ');
		cols++;
		}
		ft_putchar('\n');
	lines++;
	}
}
