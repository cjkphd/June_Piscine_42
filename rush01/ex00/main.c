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

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	print_grid(char	**s);
void	ft_putchar(char c);
char	**solve(char **grid);
int		check(char **grid, char test, int a, int b);
int		is_solved(char **arr);


int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}
void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		++str;
	}
}

int		main(int argc, char **argv)
{
	char	*arr[9];
	char	**res;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 9)
	{

		arr[i] = (char *)malloc(sizeof(char) * 10);
		i++;
	}
	i = 0;
	if (argc == 10)
	{
		while (i < 9)
		{
			j = 0;
			if (ft_strlen(argv[i + 1]) == 9)
			{
				while (j < 9)
				{
					if (argv[i + 1][j] == '.')
						arr[i][j] = '0';
					else
						arr[i][j] = argv[i + 1][j];
					j++;
				}
				arr[i][j] = '\0';
				i++;
			}
			else
			{
				ft_putstr("Error\n");
				return (0);
			}
		}
		res = solve(arr);
		print_grid(arr);
		return (0);
	}
	ft_putstr("Error\n");
	return (0);
}
