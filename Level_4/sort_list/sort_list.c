/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 16:29:11 by eonwe             #+#    #+#             */
/*   Updated: 2018/08/10 08:36:17 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swp(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

t_list	*sort_list(t_list lst, int (*cmp)(int, int))
{
	t_list *begin;
	t_list *x;

	begin = lst;
	while (lst)
	{
		x = lst->next;
		while (x)
		{
			if (!(*cmp)(x->data, lst->data))
				ft_swp(&x->data, &lst->data);
			x = x->next;
		}
		lst = lst->next;
	}
	return (begin);
}
