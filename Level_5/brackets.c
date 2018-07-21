/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:14:14 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/17 16:06:16 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     is_rnd(char c)
{
    if (c == '(')
        return (1);
    else if (c == ')')
        return (0);
    else
        return (-1);
}

int     is_sqr(char c)
{
    if (c == '[')
        return (1);
    else if (c == ']')
        return (0);
    else
        return (-1);
}

int     is_brace(char c)
{
    if (c == '{')
        return (1);
    else if (c == '}')
        return (0);
    else
        return (-1);
}

void    brackets(char *str)
{
    int x = 0;
    int y = 0;
    int z = 0;
    int j = 0;

    while (str[j])
    {
        if (is_rnd(str[j]) == 1 && is_sqr(str[j+1]) != '\0' && is_brace(str[j+1]) != '\0')
            x++;
        else if (is_rnd(str[j]) == 0)
            x--;
        else if (is_sqr(str[j]) == 1 && is_rnd(str[j+1]) != '\0' && is_brace(str[j+1]) != '\0')
            y++;
        else if (is_sqr(str[j]) == 0)
            y--;
        else if (is_brace(str[j]) == 1 && is_rnd(str[j+1]) != '\0' && is_sqr(str[j+1]) != '\0')
            z++;
        else if (is_brace(str[j]) == 0)
            z--;
        j++;
    }
    if (!x && !y && !z)
        write(1, "OK", 2);
    else
        write(1, "Error", 5);
}

int		main(int ac, char **av)
{
    int x = 1;

	if (ac > 1)
	{
		while (x < ac)
		{
			brackets(av[x++]);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}
