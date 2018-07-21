/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 15:53:50 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/18 16:24:25 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int ac, char **av)
{
    int x;
    int y;

    x = 1;
    if (ac == 1)
    {
        write(1, "\n", 1);
        return (1);
    }
    while (av[x] != '\0')
    {
        y = 0;
        while (av[x][y] != '\0')
        {
            if (av[x][y] >= 'A' && av[x][y] <= 'Z' && (av[x][y + 1] == '\t' || av[x][y + 1] == ' ' || av[x][y + 1] == '\0'))
                av[x][y] = av[x][y];
            else if (av[x][y] >= 'A' && av[x][y] <= 'Z' && (av[x][y + 1] != '\t' || av[x][y + 1] != ' ' || av[x][y + 1] != '\0'))
                av[x][y] = av[x][y] + 32;
            else if (av[x][y] >= 'a' && av[x][y] <= 'z' && (av[x][y + 1] == '\t' || av[x][y + 1] == ' ' || av[x][y + 1] == '\0'))
                av[x][y] = av[x][y] - 32;
            else
                av[x][y] = av[x][y];
            write(1, &av[x][y], 1);
            y++;
        }
        write(1, "\n", 1);
        x++;
    }
    return (1);
}
