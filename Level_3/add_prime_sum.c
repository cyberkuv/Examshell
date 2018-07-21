/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 09:45:16 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/19 08:14:14 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *c)
{
	int i;
	int out;

	out = 0;
	i = 0;
	while (c[i] != '\0')
	{
		out = out * 10 + c[i] - '0';
		i++;
	}
	return (out);
}

int	ft_is_prime(int i)
{
	int j = 1;

	while (j < i)
	{
		if (i % j == 0 && j != 1)
			return (0);
		j++;
	}
	return (1);
}

void	ft_putnum(int num)
{
	char c;

	if (num < 10)
	{
		c = num + '0';
		write (1, &c, 1);
	}
	else
	{
		ft_putnum(num / 10);
		ft_putnum(num % 10);
	}
}

int	main(int ac, char **av)
{
	int in, out, count;

	out = 0;
	count = 1;
	if (ac != 2)
	{
		write (1, "0\n", 2);
		return (1);
	}
	if (av[1][0] == '-')
	{
		write (1, "0\n", 2);
		return (1);
	}
	in = ft_atoi(av[1]);
	if (in == 1)
	{
		write (1, "1\n", 2);
		return (1);
	}
	while (count <= in)
	{
		if (ft_is_prime(count))
			out = out + count;
		count++;
	}
	out = out - 1;
	ft_putnum(out);
	write (1, "\n", 1);
	return (1);
}
