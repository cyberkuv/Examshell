/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 11:27:32 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/03/29 14:49:38 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "a", 1);
	}
	while (argc == 2 && argv[1][i] != '\0')
	{
		if (argv[1][i] == 'a')
		{
			write(1, &argv[1][i], 1);
			break ;
		}
		i++;
	}
	write(1, "\n", 1);
}
