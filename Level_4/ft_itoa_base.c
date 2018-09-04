/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 16:36:30 by eonwe             #+#    #+#             */
/*   Updated: 2018/08/07 08:29:15 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa_base(int val, int base)
{
	char *str;
	long n;
	int sign;
	int x;

	n = (val < 0) ? -(long)val : val;
	sign = (val < 0 && base == 10) ? -1 : 0;
	x = (sign == -1) ? 2 : 1;
	while ((n /= base) >= 1)
		x++;
	str = (char *)malloc(sizeof(char) * (x + 1));
	str[x] = '\0';
	n = (val < 0) ? -(long)val : val;
	while (x-- + sign)
	{
		str[x] = (n % base < 10) ? n % base + '0' : n % base + 65 - 10;
		n = n / base;
	}
	(x == 0) ? str[x] = '-' : 0;
	return (str);
}
