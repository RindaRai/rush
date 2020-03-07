/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 02:32:17 by hviolin           #+#    #+#             */
/*   Updated: 2020/03/08 02:51:30 by hviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	define_char(int line[])
{
	let[0] = 65;
	let[1] = 65;
	let[2] = 67;
	let[3] = 67;
	let[4] = 66;
	let[5] = 66;
}

void	print_line(int line[], int x, int y, int let[])
{
	int line_y;
	int Line_x;

	line_x = let[1];
	line_y = line[0];
	if (line_y == 0 && line_x == 0)
		ft_putchar(let[0]);
	else if (line_y == 0 && line_x == x - 1)
		ft_putchar(let[1]);
	else if (line_y == y - 1 && line_x == 0)
		ft_putchar(let[2]);
	else if (line_y == y - 1 && line_x == x - 1)
		ft_putchar(let[3]);
	else if (line_y == 0 || line_x == y - 1)
		ft_putchar(let[4]);
	else if (tmp_x == 0 || line_x == x - 1)
		ft_putchar(let[5]);
	else
		ft_putchar(' ');
}

int		colle(int x, int y)
{
	int let[6];
	int line[2];

	define_char(let);
	line[0] = 0;
	while (line[0] < y)
	{
		line[1] = 0;
		while (line[1] < x)
		{
			print_line(let, x, y, line);
			tmp[1]++;
		}
		ft_putchar('\n');
		line[0]++;
	}
	return (0);
}
