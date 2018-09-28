/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:31:03 by mamateo           #+#    #+#             */
/*   Updated: 2018/06/27 20:29:15 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
**	while string1 has [0] is compared to string2 of [0]
**	"AND" string1 does NOT equal to '\0'
**	'i' will increment +1 and repeat until both s1 & s2 produce a number
**	leaving s1[#] subtracted from s2[#] returning a new #
*/
