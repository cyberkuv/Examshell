/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:46:25 by eonwe             #+#    #+#             */
/*   Updated: 2018/08/24 09:00:02 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.

If the number of parameters is different from 1, the program will display
'\n'.

In the parameters that are going to be tested, there won't be any "additional"
spaces (meaning that there won't be additionnal spaces at the beginning or at
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>
*/

#include <unistd.h>

int		rev_wstr(const char * str, int len)
{
	int x;

	while (len > 0 && (str[len] == ' ' || str[len] == '\t'))
		len--;
	x = 0;
	while (x <= len && str[len - x] != ' ' && str[len - x] != '\t')
		x++;
	write(1, str + len - x + 1, x);
	while (len > 0 && (str[len] == ' ' || str[len] == '\t'))
		len--;
	if (x < len)
		write(1, " ", 1);
	return (len - x);
}

int		main(int ac, char **av)
{
	int len;

	if (ac == 2)
	{
		len = 0;
		while (av[1][len] != '\0')
			len++;
		len--;
		while (len > 0)
			len = rev_wstr(av[1], len);
	}
	write(1, "\n", 1);
	return (0);
}
