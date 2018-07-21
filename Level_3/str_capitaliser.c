/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitaliser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 15:13:50 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/03 16:20:31 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int x = 1, y;

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
			if (av[x][y] >= 'a' && av[x][y] <= 'z' && y == 0)
				av[x][y] -= 32;
			else if (av[x][y] >= 'A' && av[x][y] <= 'Z' && y == 0)
				av[x][y] = av[x][y];
			else if (av[x][y] >= 'a' && av[x][y] <= 'z' && (av[x][y - 1] == ' ' || av[x][y - 1] == '\t'))
				av[x][y] -= 32;
			else if (av[x][y] >= 'A' && av[x][y] <= 'Z' && (av[x][y - 1] == ' ' || av[x][y - 1] == '\t'))
				av[x][y] = av[x][y];
			else if (av[x][y] >= 'A' && av[x][y] <= 'Z' && (av[x][y - 1] != ' ' || av[x][y - 1] != '\t'))
				av[x][y] += 32;
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
