void	ft_putchar(char c);
void	print_line(char start, char middle, char end, int size);
void	print_filler(char c, int times);
void	print_lines(int x, int y);

void	rush(int x, int y)
{
	if (x > 0)
	{
		ft_putchar('A');
		if (x > 2)
		{
			print_filler('B', x - 2);
			ft_putchar('C');
		}
		else if (x == 2)
		{
			ft_putchar('C');
		}
		ft_putchar('\n');
		print_lines(x, y);
	}
}

void	print_filler(char c, int times)
{
	int	offset;

	offset = 0;
	while (offset < times)
	{
		ft_putchar(c);
		offset++;
	}
}

void	print_line(char start, char middle, char end, int size)
{
	int	offset;

	ft_putchar(start);
	offset = 0;
	while (offset < size - 2)
	{
		ft_putchar(middle);
		offset++;
	}
	if (size >= 2)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	print_lines(int x, int y)
{
	int	offset;

	offset = 0;
	if (y == 1)
		return ;
	else if (y == 2)
		print_line('A', 'B', 'C', x);
	else if (y > 2)
	{
		while (offset < y - 2)
		{
			print_line('B', ' ', 'B', x);
			offset++;
		}
		print_line('A', 'B', 'C', x);
	}
}
