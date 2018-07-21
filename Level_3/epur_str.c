/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 09:51:44 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/20 14:08:56 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    epur_str(char *str)
{
    int x = 0;
    char spc = 2;

    while (str[x] != '\0')
    {
        if (str[x] != ' ' && str[x] != '\t')
        {
            if (spc == 1)
                ft_putchar(' ');
            spc = 0;
            ft_putchar(str[x]);
        }
        else if (spc == 0)
            spc = 1;
        x++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 2)
        epur_str(av[1]);
    ft_putchar('\n');
    return (0);
}
