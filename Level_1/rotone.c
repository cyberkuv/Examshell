/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:53:53 by eonwe             #+#    #+#             */
/*   Updated: 2018/06/20 16:22:34 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int x = 0;
	int j;
	int up;
	int lc;

	if (argc == 2)
	{
		while (argv[1][x] != '\0')
		{
			j = argv[1][x];
			if ((j >= 'a' && j <= 'y') || (j >= 'A' && j <= 'Y'))
			{
				lc = argv[1][x] + 1;
				write(1, &lc, 1);
			}
			else if (j >= 'z' || j <= 'Z')
			{
				up = argv[1][x] - 25;
				write(1, &up, 1);
			}
			else
			{
				write(1, &argv[1][x], 1);
			}
			x++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
