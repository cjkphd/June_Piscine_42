/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makwan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 23:05:58 by makwan            #+#    #+#             */
/*   Updated: 2018/06/30 23:06:05 by makwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check(char **grid, char test, int a, int b);
int		is_solved(char **arr);

char	**solve(char **grid)
{
	int row;
	int col;
	char num;

	row = 0;
	if (is_solved(grid) == 1)
		return (grid);
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (grid[row][col] == '0')
			{
				num = '1';
				while (num <= '9')
				{
					if (check(grid, num, row, col) == 1)
						grid[row][col] = num;
					else
						num++;
				}
				if (solve(grid) == grid)
				{
					if (col != 0)
						grid[row][col - 1] = '0';
					else
						grid[row - 1][9] = '0';
					free(grid);
					solve(grid);
				}
			}
			col++;
		}
		row++;
	}
	return (grid);
}

