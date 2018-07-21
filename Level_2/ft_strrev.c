/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:27:33 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/11 10:32:27 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_strlen(char *str)
{
    int x = 0;
    while (str[x] != '\0')
        x++;
    return (x);
}

char    *ft_strrev(char *str)
{
    char *begin;
    char *end;
    char tmp;

    begin = str;
    end = begin + ft_strlen(str) - 1;
    while (end > begin)
    {
        tmp = *begin;
        *begin = *end;
        *end = tmp;
        begin++;
        end--;
    }
    return (str);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        printf("%s\n", ft_strrev(av[1]));
    return (0);
}
