/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makwan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 19:05:24 by makwan            #+#    #+#             */
/*   Updated: 2018/06/30 19:48:10 by makwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putstr(char *str);

int		check_box(int x, int y, char **grid, char test)
{
	int i;
	int j;
	int a;
	int b;

	if (x < 3)
		b = 0;
	if (y < 3)
		a = 0;
	if (x < 6)
		b = 3;
	if (y < 6)
		a = 3;
	if (x < 9)
		b = 6;
	if (y < 9)
		a = 6;
	i = x - (x % b);
	while (i < b + 3)
	{
		j = y - (y % a);
		while (j < y + 3)
		{
			if (test == grid[i][j])
				return(0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check(char **grid, char test, int a, int b)
{
	int i;

	i = 0;
	while (i < 9 && test != grid[a][i] && test != grid[i][b] && check_box(a, b, grid, test) == 1)
			i++;
	if (i != 9)
		return (0);
	return (1);
}
