/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 13:32:01 by mamateo           #+#    #+#             */
/*   Updated: 2018/07/01 16:56:00 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	else if (*s1 == *s2 && *s1 != '*')
		return (match(s1 + 1, s2 + 1));
	else if (*s1 == '*' && *s2 == '*')
		return (match(s1 + 1, s2));
	else if (*s2 == '*' && !*s1)
		return (match(s1, s2 + 1));
	else if (*s2 == '*' && *s2 && *s1)
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	else
		return (0);
}
/*
** if statement (*s1 == 0 && *s2 == 0)
** can also be (!*s1 && !*s2) as they're similar meaning:
** "if array*string1 is equal to 0 AND array*string2 is equal to 0"
** thus, returning a 1 else if the other statements apply...
**
** else "if ary*s1 is equal to ary*s2 AND ary*s1 is NOT equal to char '*' "
** return the stored ary in recurse ie., match(s1 + 1, s2 + 1) etc.
**
** however if:
** "if *s2 is equal to '*' AND *s2 AND! *s1" it should return
** like it's decrypting itself onto s1||s2 incrementing by 1
*/
