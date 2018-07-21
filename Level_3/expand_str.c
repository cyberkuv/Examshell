/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 11:09:18 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/18 11:36:16 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    expand_str(char *str)
{
    int k = 0;
    char spc = 2;

    while (str[k] != '\0')
    {
        if (str[k] != ' ' && str[k] != '\t')
        {
            if (spc == 1)
            {
                ft_putchar(' ');
                ft_putchar(' ');
                ft_putchar(' ');
            }
            spc = 0;
            ft_putchar(str[k]);
        }
        else if (spc == 0)
            spc = 1;
        k++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 2)
        expand_str(av[1]);
    ft_putchar('\n');
    return (0);
}
