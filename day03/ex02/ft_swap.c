/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 04:33:27 by mamateo           #+#    #+#             */
/*   Updated: 2018/06/25 15:20:52 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//creating a function called ft_swap that int *a and int *b will exist
//POINTER: A pointer is a variable whose value is the address of another variable
void	ft_swap(int *a, int *b)
{
	int f;
//f now exists in the function
	f = *a; //f equals 
	*a = *b; //a* equals *b;
	*b = f;
}
