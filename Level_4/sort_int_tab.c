/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 14:34:29 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/17 15:07:58 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    sort_int_tab(int *tab, unsigned int size)
{
    unsigned int    x = 1;
    int             y = 0;
    int             z = 0;

    while (x < size)
    {
        y = x;
        while (y > 0 && tab[y - 1] > tab[y])
        {
            z = tab[y];
            tab[y] = tab[y - 1];
            tab[y - 1] = z;
            y--;
        }
        x++;
    }
}

int     main()
{
    int tab[10];
    int i = 0;

    tab[0] = 9;
    tab[1] = 2;
    tab[2] = 4;
    tab[3] = 3;
    tab[4] = 8;
    tab[5] = 0;
    tab[6] = 1;
    tab[7] = 7;
    tab[8] = 5;
    tab[9] = 6;
    sort_int_tab(tab, 10);
    while (i <= 9)
        printf("%d\n", tab[i++]);
    return (0);
}
