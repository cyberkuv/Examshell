/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 15:09:27 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/09 15:57:54 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int x;
	int lc;
	int hc;

	x = 0;
	if (argc == 2)
	{
		while (argv[1][x])
		{
			if (argv[1][x] >= 'a' && argv[1][x] <= 'z')
			{
				lc = argv[1][x] - 97;
				while (lc >= 0)
				{
					write(1, &argv[1][x], 1);
					lc--;
				}
			}
			else if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
			{
				hc = argv[1][x] - 65;
				while (hc >= 0)
				{
					write(1, &argv[1][x], 1);
					hc--;
				}
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
