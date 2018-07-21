/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 15:53:11 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/07 11:59:54 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
		str++;
	if (str[i] == '-')
		return (-1);
   if (str[i] == '+')
	   i++;
   res = 0;
   while (str[i])
   {
	   if (str[i] < '0' || str[i] > '9')
		   return (-1);
	   res = res * 10 + (str[i] - 48);
	   i++;
   }
   return (res);
}

void	print_hex(unsigned int n)
{
	if (n >= 16)
		print_hex(n / 16);
	if (n % 16 < 10)
		ft_putchar((n % 16) + 48);
	else
		ft_putchar((n % 16) -10 + 97);
}

int		main(int argc, char **argv)
{
	int nbr;

	if (argc == 2)
	{
		if ((nbr = ft_atoi(argv[1]) != -1))
				print_hex(nbr);
	}
	write (1, "\n", 1);
	return (0);
}

#include <unistd.h>

void	print_hex(int p)
{
	char *str;

	str = "0123456789abcdef";
	if (p == 0)
		write (1, "0", 1);
	while (p)
	{
		write(1, &str[p % 16], 1);
		p /= 16;
	}
}

int		ft_atoi(char *str)
{
	int		i;
	int		nbr;
	int		sign;

	i = 0;
	nbr = 0;
	sign = 1;
	if (!str[i])
		return (0);
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || \
		str[i] == ' ' || str[i] == '\r' || str[i] == '\f')
		i += 1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && (str[i] >= '0' && '9' >= str[i]))
		nbr = (nbr * 10) + str[i++] - '0';
	return (nbr * sign);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}*/
/** correct one......! */
int		ft_atoi(char *s)
{
	long	r;
	int		sign;

	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	sign = (*s == '-') ? -1 : 1;
	(*s == '-' || *s == '+') ? s++ : s;
	r = 0;
	while (*s >= '0' && *s <= '9')
		r = r * 10 + *s++ - '0';
	return ((int)r * sign);
}

void	print_hex(int n)
{
	if (n >= 16)
		print_hex(n / 16);
	n = n % 16;
	n += n < 10 ? '0' : 'a' - 10;
	write(1, &n, 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (1);
}
/** end of correct one.....! */

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		num += (int)str[x] - 48;
		x++;
	}
	if (negat == 1)
		return (-num);
	return (num);
}

void	print_hex(int nbr)
{
	if (nbr > 16)
	{
		print_hex(nbr / 16);
		print_hex(nbr % 16);
	}
	if (nbr < 10)
		ft_putchar(nbr + 48);
	else if (nbr < 16)
		ft_putchar(nbr + 87);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}*/
