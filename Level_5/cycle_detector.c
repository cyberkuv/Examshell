/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 09:19:02 by eonwe             #+#    #+#             */
/*   Updated: 2018/08/07 09:28:33 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**  5 Assignment name  : cycle_detector
  4 Expected files   : cycle_detector.c
  3 Allowed functions: malloc, free
  2 --------------------------------------------------------------------------------
  1
6   Create a function named cycle_detector that takes a const t_list *list
  1 as argument, and check if the given linked list contains no cycles.
  2
  3 A cycle is defined when you go at least twice through the same link, when you
  4 travel inside a linked list.
  5
  6 This function should returnw 1 if it detects a cycle inside the given linked
  7 list, otherwise it returns 0.
  8
  9 This function should be prototyped like this:
 10
 11     int        cycle_detector(const t_list *list)
 12
 13 The type t_list is:
 14
 15     typedef struct     s_list
 16     {
 17         int            data;
 18         struct s_list  *next;
 19     }                  t_list;
 20
 21 This type will be included in a header named "list.h". You don't have to turn-in
 22 your "list.h", we will use ours during the evaluation.
 **/

#include "list.h"

int		cycle_detector(const t_list *list)
{
	const t_list *l1 = list;
	const t_list *l2 = list;

	while (l1 && l2 && l2->next)
	{
		l1 = l1->next;
		l2 = ls->next->next;
		if (l1 == l2)
			return (1);
	}
	return (0);
}

