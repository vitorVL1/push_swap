/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:40:42 by vlima             #+#    #+#             */
/*   Updated: 2023/01/16 16:40:49 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//rotate

void	ra(t_node **stack1)
{
	ft_rotate(stack1);
	write(1, "ra\n", 3);
}

void	rb(t_node **stack2)
{
	ft_rotate(stack2);
	write(1, "rb\n", 3);
}

void	rr(t_node **stack1, t_node **stack2)
{
	ft_rotate(stack1);
	ft_rotate(stack2);
	write(1, "rr\n", 3);
}


//push

void	pa(t_node **a, t_node **b)
{
	ft_push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_node **a, t_node **b)
{
	ft_push(b, a);
	write(1, "pb\n", 3);
}

//push
