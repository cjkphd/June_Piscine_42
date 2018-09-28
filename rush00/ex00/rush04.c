/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteinbe <jsteinbe@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:36:48 by jsteinbe          #+#    #+#             */
/*   Updated: 2018/06/24 23:05:58 by jsteinbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int x_i;
	int y_i;

	y_i = 1;
	while (y_i <= y)
	{
		x_i = 1;
		while (x_i <= x)
		{
			if ((x_i == x && y_i == 1) && x_i != 1)
				ft_putchar('C');
			else if ((x_i == 1 && y_i == y) && y_i != 1)
				ft_putchar('C');
			else if ((x_i == 1 && y_i == 1) || (x_i == x && y_i == y))
				ft_putchar('A');
			else if (x_i > 1 && x_i < x && y_i > 1 && y_i < y)
				ft_putchar(' ');
			else
				ft_putchar('B');
			x_i++;
		}
		ft_putchar('\n');
		y_i++;
	}
}
