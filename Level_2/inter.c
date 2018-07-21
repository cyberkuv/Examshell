/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 09:37:42 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/06 09:43:59 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     dubs(char *str, char c, int n)
{
    int x = 0;

    while (x < n)
    {
        if (str[x] == c)
            return (0);
        x++;
    }
    return (1);
}

void    inter(char *str1, char *str2)
{
    int i = 0;
    int j;

    while (str1[i])
    {
        if (dubs(str1, str1[i], i) == 1)
        {
            j = 0;
            while (str2[j])
            {
                if (str1[j] == str2[i])
                {
                    write(1, &str1[i], 1);
                    break ;
                }
                j++;
            }
        }
        i++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 3)
        inter(av[1], av[2]);
    write(1, "\n", 1);
    return (0);
}
