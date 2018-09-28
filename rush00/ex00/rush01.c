/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteinbe <jsteinbe@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:31:39 by jsteinbe          #+#    #+#             */
/*   Updated: 2018/06/24 22:31:44 by jsteinbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int x_max;
	int y_max;

	x_max = x;
	y_max = y;
	y = 1;
	while (y <= y_max)
	{
		x = 1;
		while (x <= x_max)
		{
			if ((x == 1 && y == 1) || (x == x_max && y == y_max))
				ft_putchar('/');
			else if (x > 1 && x < x_max && y > 1 && y < y_max)
				ft_putchar(' ');
			else if ((x == x_max && y == 1) || (x == 1 && y == y_max))
				ft_putchar('\\');
			else
				ft_putchar('*');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
