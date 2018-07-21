/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 08:29:52 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/09 08:21:00 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int x;
    int n;
    char *str;

    n = 0;
    while (src[n])
        n++;
    str = (char *)malloc(sizeof(*str) * (n + 1));
    x = 0;
    while (x < n)
    {
        str[x] = src[x];
        x++;
    }
    return (str);
}
