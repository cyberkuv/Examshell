/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lish.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 09:24:10 by eonwe             #+#    #+#             */
/*   Updated: 2018/07/27 09:25:48 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct		s_list
{
	int				data;
	t_list			*next;
}					t_list;

#endif
