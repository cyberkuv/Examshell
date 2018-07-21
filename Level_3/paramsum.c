/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 13:00:07 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/19 08:18:34 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	int x;

	x = n;
	if (x < 0)
	{
		x = x * (-1);
		ft_putchar('-');
	}
	if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else
		ft_putchar(x + '0');
}

int		main(int argc, char **argv)
{
	int x;

	argv[1] = "0";
	x = argc -1;
	if (x >= 0)
		ft_putnbr(x);
	write(1, "\n", 1);
	return (0);
}
