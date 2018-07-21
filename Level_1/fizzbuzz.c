/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 11:28:41 by eonwe             #+#    #+#             */
/*   Updated: 2018/06/21 08:56:48 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long int x;

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

int		main()
{
	int x = 1;

	while (x <= 100)
	{
		if (x % 3 == 0 && x % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (x % 3 == 0)
			write(1, "fizz\n", 5);
		else if (x % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			ft_putnbr(x);
			write(1, "\n", 1);
		}
		x++;
	}
	return (0);
}

/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long int i;

	i = n;
	if (i < 0)
	{
		i = i * (-1);
		ft_putchar('-');
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
}

int		main()
{
	int f;

	f = 1;
	while (f <= 100)
	{
		if (f % 3 == 0 && f % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (f % 3 == 0)
			write(1, "fizz\n", 5);
		else if (f % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
				ft_putnbr(f);
				write(1, "\n", 1);
		} 
		f++;
	}
	return (0);
}*/