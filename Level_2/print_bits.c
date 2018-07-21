/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 12:59:54 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/09 11:46:49 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int x = 128;
	int oct = octet;
	while (x != '\0')
	{
		if (x <= oct)
		{
			write(1, "1", 1);
			oct %= x;
		}
		else
			write(1, "0", 1);
		x /= 2;
	}
}

int		main(void)
{
	print_bits(8);
}

