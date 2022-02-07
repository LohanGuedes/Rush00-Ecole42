/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:43:25 by coder             #+#    #+#             */
/*   Updated: 2022/02/07 00:24:30 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	populate_rush(int x, int y);

void	rush(int x, int y)
{
	if (x < 1 || y < 1 || x > 2147483647 || y > 2147483647)
		return ;
	else
		populate_rush(x, y);
}

void	populate_rush(int x, int y)
{
	int	lines;
	int	cols;

	lines = 1;
	while (lines <= y)
	{
		cols = 1;
		while (cols <= x)
		{
			if ((lines == 1 && cols == 1)
				|| (lines == y && cols == x && lines != 1 && cols != 1))
				ft_putchar('A');
			else if ((lines == 1 && cols == x) || (lines == y && cols == 1))
				ft_putchar('C');
			else if ((lines == 1 && cols > 1)
				|| (cols == 1 && lines > 1) || (cols == x && lines > 1)
				|| (lines == y && cols > 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
		cols++;
		}
		ft_putchar('\n');
	lines++;
	}
}

