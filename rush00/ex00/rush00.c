/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteinbe <jsteinbe@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 23:18:36 by jsteinbe          #+#    #+#             */
/*   Updated: 2018/06/24 23:34:17 by jsteinbe         ###   ########.fr       */
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
			if ((x_i == 1 && y_i == 1) || (x_i == x && y_i == 1))
				ft_putchar('o');
			else if ((x_i == 1 && y_i == y) || (x_i == x && y_i == y))
				ft_putchar('o');
			else if (y_i == 1 || y_i == y)
				ft_putchar('-');
			else if (x_i == 1 || x_i == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			x_i++;
		}
		ft_putchar('\n');
		y_i++;
	}
}
