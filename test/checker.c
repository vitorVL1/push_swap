/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorvl <vitorvl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:10:58 by vlima             #+#    #+#             */
/*   Updated: 2023/03/06 13:34:07 by vitorvl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	checker_num(int argc, char *argv[])
{
	char	*str;
	int		i;
	int		h;

	i = 1;
	while (i < argc)
	{
		h = 0;
		printf("Value of i: %d\n", i);
		str = argv[i];
		while (str[h] != '\0')
		{
			if (str[h] < 48 || str[h] > 57)
			{
				printf("not number\n");
				return (0);
			}
			h++;
		}
		i++;
	}
	printf("All elements are numbers\n");
	return (1);
}
