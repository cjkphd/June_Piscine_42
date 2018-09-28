/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:03:30 by mamateo           #+#    #+#             */
/*   Updated: 2018/06/25 18:48:41 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//FUNCTION 1 - a library to be used into the "iNSTRUCTIONS FUNCTION"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
//FUNCTION 2 - the "iNSTRUCTIONS FUNCTION" to be called into "MAIN()"
void	ft_putstr(char *str) //*str = an "ARRAY" of a "STRING - str"
{
	int i;

	i = 0;
	
	while (str[i] != '\0')//"while" is used as a "loop data type"
	{
		ft_putchar(str[i]);
		i++;//looping: 'i' will "add" and "repeat" function from beginning of function
	}
}
//FUNCTION 3 - "MAIN()" to run the program
int		main()//main("void or nothing") is just for norminette
{
	char str[] = "poopmonster\n";
	//char = declared existence, similar to int = _; but int is for whole numbers
	//str[] = value, similar to _ = _; but depending on the statement

	ft_putstr(str);//ft_putstr(str) calls FUNCTION 2
	return (0);//return an answer to me
}

// "WHEN COMPLING" IT REQUIRES "THE LIBRARY" AND "MAIN FUNCTION" TO WORK AND
// IF "CHECKING WITH NORM", BOTH "MAIN AND LIBRARY MUST NOT BE IN FILE" AND
// "PROTOTYPE" IS APPLIED TO THE TOP OR MEETS THE REQUIREMENTS
