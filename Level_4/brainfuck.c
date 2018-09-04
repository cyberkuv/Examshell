/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 13:22:05 by eonwe             #+#    #+#             */
/*   Updated: 2018/08/09 10:37:04 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*sqr(char *src, int way)
{
	int x = 0;
	
	while (1)
	{
		if (*src == '[')
			x++;
		else if (*src == ']')
			x--;
		if (x == 0)
			return (src);
		src += way;
	}
	return (NULL);
}

void	brainfuck(char *src, char *buff)
{
	while (*src != '\0')
	{
		if (*src == '>')
			buff++;
		else if (*src == '<')
			buff--;
		else if (*src == '+')
			(*buff)++;
		else if (*src == '-')
			(*buff)--;
		else if (*src == '.')
			write(1, buff, 1);
		else if (*src == '[' && ! (*buff))
			src = sqr(src, 1);
		else if (*src == ']' && (*buff))
			src = sqr(src, -1);
		src++;
	}
}

int		main(int ac, char **av)
{
	char buf[2046];
	int a;

	if (ac > 1)
	{
		a = 0;
		while (a < 2046)
			buf[a++] = 0;
		brainfuck(av[1], buf);
	}
	else
		write(1, "\n", 1);
	return (0);
}
