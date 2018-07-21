/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:35:06 by eonwe             #+#    #+#             */
/*   Updated: 2018/06/29 15:40:01 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int x = 0;
	int up;
	int dn;

	if (argc == 2)
	{
		while (argv[1][x] != '\0')
		{
			if (argv[1][x] >= 'a' && argv[1][x] <= 'z')
			{
				dn = argv[1][x] - 32;
				write(1, &dn, 1);
			}
			else if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
			{
				up = argv[1][x] + 32;
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
