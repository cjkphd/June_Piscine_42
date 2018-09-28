/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteinbe <jsteinbe@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 20:31:20 by jsteinbe          #+#    #+#             */
/*   Updated: 2018/06/24 19:36:40 by kaanggas         ###   ########.fr       */
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
			if ((x == 1 && y == 1) || (x == x_max && y == 1))
				ft_putchar('A');
			else if (x > 1 && x < x_max && y > 1 && y < y_max)
				ft_putchar(' ');
			else if ((x == 1 && y == y_max) || (x == x_max && y == y_max))
				ft_putchar('C');
			else
				ft_putchar('B');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
