/private/tmp/toweltmp/day05/ex01/ft_putnbr.c /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 18:21:25 by mamateo           #+#    #+#             */
/*   Updated: 2018/06/26 11:40:22 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//LIBRARY
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
//PUTNBR FUNCTION
void	ft_putnbr(int nb)
{
	long end;

	end = nb;
	if (end < 0)
	{
		ft_putchar('-');
		end = -end;
	}
	if (end >= 10)
	{
		ft_putnbr(end / 10);
		ft_putnbr(end % 10);
	}
	else
		ft_putchar(end + '0');
}
//MAIN
int		main(void)
{
	ft_putnbr(-42);
	ft_putnbr(42);
	ft_putnbr(-2147483647);
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	return (0);
}
