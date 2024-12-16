/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnard <abonnard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:38:33 by abonnard          #+#    #+#             */
/*   Updated: 2024/12/15 22:58:33 by abonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;

	if (ac < 2)
		return (0);
	if (ac == 2)
		a = convert_single_string(av[1]);
	else
		a = parsing(0, ac, av, -1);
	if (a == NULL)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (a_is_sorted(a) < 0)
	{
		sup_all_list(a);
		return (0);
	}
	if (a->nb_elem <= 5)
		sort_small_stack(a);
	else
		sort_big_stack(a);
	sup_all_list(a);
	return (0);
}
