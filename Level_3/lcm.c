/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 07:41:20 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/11 08:09:55 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// A recursive function that returns the GCD of two numbers.
unsigned int     gcd(unsigned int x, unsigned int y)
{
	return (y == 0 ? x : gcd(y, x % y));
}

unsigned int    lcm(unsigned int x, unsigned int y)
{
	return (x * y / gcd(x, y));
}

int main()
{
	printf("Enter two positive numbers to find the Lowest Common Multiple: ");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("The LCM of %d and %d is %d.\n", a, b, lcm(a, b));
}
