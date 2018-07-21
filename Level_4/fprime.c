/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 08:26:54 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/20 09:51:07 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    fprime(int nbr)
{
   int x = 2;

    if (nbr == 1)
    {
        printf("1");
        return ;
    }
    while (nbr >= x)
    {
        if (nbr % x == 0)
        {
            printf("%d", x);
            if (nbr != x)
                printf("*");
            nbr /= x;
            x--;
        }
        x++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 2)
        fprime(atoi(av[1]));
    printf("\n");
    return (0);
}
