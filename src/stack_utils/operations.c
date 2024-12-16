/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnard <abonnard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:37:44 by abonnard          #+#    #+#             */
/*   Updated: 2024/12/15 23:12:15 by abonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sa(t_list *a)
{
	t_element	*tmp;

	tmp = a->first;
	a->first = a->first->next;
	tmp->next = a->first->next;
	a->first->next = tmp;
	ft_putstr_fd("sa\n", 1);
}

void	ra(t_list *a)
{
	t_element	*tmp;
	t_element	*yet;

	tmp = a->first;
	a->first = a->first->next;
	tmp->next = NULL;
	yet = a->first;
	while (yet->next != NULL)
		yet = yet->next;
	yet->next = tmp;
	ft_putstr_fd("ra\n", 1);
}

void	pa(t_list *a, t_list *b)
{
	t_element	*tmp;

	tmp = a->first;
	a->first = a->first->next;
	tmp->next = b->first;
	b->first = tmp;
	b->nb_elem--;
	a->nb_elem++;
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list *a, t_list *b)
{
	t_element	*tmp;

	tmp = a->first;
	a->first = a->first->next;
	tmp->next = b->first;
	b->first = tmp;
	a->nb_elem--;
	b->nb_elem++;
	ft_putstr_fd("pb\n", 1);
}

void	rra(t_list *a)
{
	t_element	*yet;
	t_element	*tmp;

	yet = a->first;
	while (yet->next->next != NULL)
		yet = yet->next;
	tmp = yet->next;
	yet->next = NULL;
	tmp->next = a->first;
	a->first = tmp;
	ft_putstr_fd("rra\n", 1);
}
