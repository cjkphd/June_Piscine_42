/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:03:30 by mamateo           #+#    #+#             */
/*   Updated: 2018/06/26 20:55:57 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
/*
**	ft_putchar(char c): will pull from a separate file
**	(*str): is an array of letters ie., str[];
**	'i' is given existence in the function
**	then 'i' is given a value of '0'
**	while (string[index] does NOT equal != to '\0')
**	ft_putchar(str[i]) will write a (string of an [array of characters])
**	'i' = i + 1; i increments + 1 and repeats the loop back to the top*/

int		main(void)
{
	char str = "Poopmonster";

	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}

