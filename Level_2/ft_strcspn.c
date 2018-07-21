/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 14:18:26 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/10 16:32:05 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strcspn(const char *s, const char *reject)
{
	const char *str1;
	const char *str2;

	str1 = s;
	while (*str1)
	{
		str2 = reject;
		while (*str2)
		{
			if (*str1 == *str2++)
				return (str1 - s);
		}
		str1++;
	}
	return (str1 - s);
}
