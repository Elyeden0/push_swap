/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnard <abonnard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:14:25 by abonnard          #+#    #+#             */
/*   Updated: 2024/12/15 23:04:33 by abonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_small_stack(t_list *a)
{
	sort_list(a);
	if (a->nb_elem == 2)
		sa(a);
	else if (a->nb_elem == 3)
		sort_list_of_three(a, 0, 1, 2);
	else if (a->nb_elem == 4)
		sort_list_of_four(a);
	else if (a->nb_elem == 5)
		sort_list_of_five(a);
}
