/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 09:03:51 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/09 13:17:29 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_list.h*/

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>

typedef struct      s_list;
{
    struct s_list   *next;
    void            *data;
}                   t_list;

#endif

/*ft_list_size..c*/

#include "ft_list.h"

int     ft_list_size(t_list *begin_list)
{
    int     x = 0;
    t_list  *list = begin_list;

    while (list)
    {
        list = list->next;
        x++;
    }
    return (x);
}
