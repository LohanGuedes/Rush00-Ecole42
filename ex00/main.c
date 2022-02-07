/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:43:23 by coder             #+#    #+#             */
/*   Updated: 2022/02/07 00:29:40 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
int		ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	int	rush_col;
	int	rush_line;

	if (argc == 1)
		rush(5, 5);
	else if (argc != 3)
		return (1);
	else
	{
		rush_col = ft_atoi(argv[1]);
		rush_line = ft_atoi(argv[2]);
		rush(rush_col, rush_line);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		++i;
	}
	return (res);
}

