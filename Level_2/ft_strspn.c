/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 14:21:56 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/10 16:15:41 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strspn(const char *s, const char *reject)
{
	const char *str1;
	const char *str2;

	str1 = s;
	while (*str1)
	{
		str2 = reject;
		while (1)
		{
			if (*str1 == *str2)
				break ;
			else if (*str1 == '\0')
				return (str1 - s);
		}
		str1++;
	}
	return (str1 - s);
}
