/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:30:04 by eonwe             #+#    #+#             */
/*   Updated: 2018/08/24 08:10:29 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str)
{
	int x = 0;
	int y;
	int z = 0;
	char **div;

	if (!(div = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[x] == ' ' || str[x] == '\t' || str[x] == '\n')
		x += 1;
	while (str[x])
	{
		y = 0;
		if (!(div[z] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[x] != ' ' && str[x] != '\t' && str[x] != '\n' && str[x])
			div[z][y++] = str[x++];
		while (str[x] == ' ' || str[x] == '\t' || str[x] == '\n')
			x += 1;
		div[z][y] = '\0';
		z += 1;
	}
	div[z] = NULL;
	return (div);
}
