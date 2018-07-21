/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:55:23 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/07 13:49:33 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int x = 0;
	int num = 0;
	int negat = 0;

	while ((str[x] >= '\t' && str[x] <= '\r') || (str[x] == ' '))
		x++;
	if (str[x] == '-')
		negat = 1;
	if (str[x] == '+' || str[x] == '-')
		x++;
	while (str[x] && (str[x] >= '0') && (str[x] <= '9'))
	{
		num *= 10;
		num += (int)str[x] - '0';
		x++;
	}
	if (negat == 1)
		return (-num);
	return (num);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("ME : %d\n", ft_atoi(argv[1]));
		printf("MAC : %d\n", atoi(argv[1]));
	}
	return (0);
}
