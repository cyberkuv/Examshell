/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:47:36 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/09 16:54:58 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int ac, char **av)
{
    int k = 0;
    char *lstwd;

    if (ac == 2)
    {
        while (av[1][k] != '\0')
        {
            if (av[1][k] <= 32 && av[1][k + 1] > 32)
                lstwd = &av[1][k + 1];
            k++;
        }
        k = 0;
        while (lstwd && lstwd[k] > 32)
        {
            write(1, &lstwd[k], 1);
            k++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
