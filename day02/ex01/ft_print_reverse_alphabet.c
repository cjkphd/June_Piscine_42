/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdsa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 18:01:41 by mamateo           #+#    #+#             */
/*   Updated: 2018/06/21 18:26:14 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter = letter - 1;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
