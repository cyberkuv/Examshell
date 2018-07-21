/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:56:04 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/09 12:01:19 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int x = 0;
	int hc;
	int lc;

	if (argc == 2)
	{
		while (argv[1][x] != '\0')
		{
			if (argv[1][x] >= 'a' && argv[1][x] <= 'z')
			{
				lc = 'z' - argv[1][x] + 'a';
				write(1, &lc, 1);
			}
			else if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
			{
				hc = 'Z' - argv[1][x] + 'A';
				write(1, &hc, 1);
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
