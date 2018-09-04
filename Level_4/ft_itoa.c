/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 08:37:45 by eonwe             #+#    #+#             */
/*   Updated: 2018/08/07 08:58:39 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**1   Assignment name  : ft_itoa
  1 Expected files   : ft_itoa.c
  2 Allowed functions: malloc
  3 --------------------------------------------------------------------------------
  4
  5 Write a function that takes an int and converts it to a null-terminated string.
  6 The function returns the result in a char array that you must allocate.
  7
  8 Your function must be declared as follows:
  9
 10 char    *ft_itoa(int nbr);
 **/

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char *str;
	long n;
	int sign;
	int x;

	n = (nbr < 0) ? -(long)nbr : nbr;
	sign = (nbr < 0) ? -1 : 0;
	x = (sign == -1) ? 2 : 1;
	while ((n /= 10) >= 1)
		x++;
	str = (char *)malloc(sizeof(char) * (x + 1));
	str[x] = '\0';
	n = (nbr < 0) ? -(long)nbr : nbr;
	while (x-- + sign)
	{
		str[x] = (n % 10 < 10) ? n % 10 + '0' : n % 10 + 65 - 10;
		n /= 10;
	}
	(x == 0) ? str[x] = '-' : 0;
	return (str);
}
