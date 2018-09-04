/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 08:06:26 by eonwe             #+#    #+#             */
/*   Updated: 2018/08/29 14:28:34 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr_hex(int octet)
{
	char *base = "0123456789abcdef";
	
	write(1, &base[octet / 16], 1);
	write(1, &base[octet % 16], 1);
}

void	p_putchar(unsigned const char *ptr)
{
	unsigned const char c = *ptr;

	if (' ' <= c && c <= '~')
		write(1, ptr, 1);
	else
		write(1, ".", 1);
}

void	print_memory(const void *addr, size_t size)
{
	size_t i;
	size_t j;
	unsigned const char *ptr = addr;
	
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < 16 && i + j < size)
		{
			putnbr_hex(*(ptr + i + j));
			if (j % 2)
				write(1, " ", 1);
			j++;
		}
		while (j < 16)
		{
			write(1, "  ", 2);
			if (j % 2)
				write(1, " ", 1);
			j++;
		}
		j = 0;
		while (j < 16 && i + j < size)
		{
			p_putchar(ptr + i + j);
			j++;
		}
		write(1, "\n", 1);
		i += 16;
	}

}

int     main(void)
{
    int     tab[10] = {0, 23, 150, 255,
    12, 16,  42, 103};
    print_memory(tab, sizeof(tab));
    return (0);
}
