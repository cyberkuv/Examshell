/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:36:44 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/14 09:08:43 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	pgcd(int x, int y)
{
	int k = 1;
	int gcd = 1;

	while (k < x && k < y)
	{
		if (x % k == 0 && y % k == 0)
			gcd = k;
		k++;
	}
	printf("%d", gcd);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	printf("\n");
	return (0);
}
