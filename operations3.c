/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:39:54 by vlima             #+#    #+#             */
/*   Updated: 2023/01/23 13:57:51 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//swap

void	sa(t_node **stack1)
{
	ft_swap(stack1);
	write(1, "sa\n", 3);
}

void	sb(t_node **stack2)
{
	ft_swap(stack2);
	write(1, "sb\n", 3);
}

void	ss(t_node **stack1, t_node **stack2)
{
	ft_swap(stack1);
	ft_swap(stack2);
	write(1, "ss\n", 3);
}

//reverse

void	rra(t_node **stack1)
{
	ft_reverse(stack1);
	write(1, "rra\n", 4);
}

void	rrb(t_node **stack2)
{
	ft_reverse(stack2);
	write(1, "rrb\n", 4);
}
