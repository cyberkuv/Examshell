/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 08:29:28 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/19 08:34:04 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *range;
    int x;

    if (start > end)
        range = (int *)malloc(sizeof(int) * (start - end) + 1);
    else
        range = (int *)malloc(sizeof(int) * (start - end) + 1);
    x = 0;
    while (start != end)
    {
        range[x++] = start;
        start += (start > end) ? -1 : 1;
    }
    range[x] = start;
    return (range);
}
