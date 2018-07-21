/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:34:16 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/10 15:59:05 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}

char	*ft_strpbrk(char const *str1, char const *str2)
{
	char *s1 = (char *)str1;
	char *s2 = (char *)str2;

	while (*s1)
	{
		if (ft_strchr(s2, *s1) != 0)
			return (s1);
		s1++;
	}
	return (NULL);
}

int main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	char	*str1 = argv[1];
	char	*str2 = argv[2];

	printf("standard = [%p]\n", strpbrk(str1, str2));
	printf("mine is  = [%p]\n", ft_strpbrk(str1, str2));
	return (0);
}
