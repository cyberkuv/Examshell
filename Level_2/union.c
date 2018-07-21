/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 15:41:38 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/09 16:19:02 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     dubs2(char *str, char c)
{
    int x = 0;

    while (str[x] != '\0')
    {
        if (str[x] == c)
            return (0);
        x++;
    }
    return (1);
}

int     dubs1(char *str, char c, int n)
{
    int x = 0;

    while (x < n)
    {
        if (str[x] == c)
            return (0);
        x++;
    }
    return (1);
}

int		main(int ac, char **av)
{
    int x = 0;

    if (ac == 3)
    {
        while (av[1][x] != '\0')
        {
            if (dubs1(av[1], av[1][x], x))
                write(1, &av[1][x], 1);
            x++;
        }
        while (av[2][x] != '\0')
        {
            if (dubs2(av[2], av[1][x]))
            {
                if (dubs1(av[2], av[2][x], x))
                    writ(1, &av[2][x], 1);
            }
            x++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
