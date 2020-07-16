/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledube <ledube@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:31:34 by ledube            #+#    #+#             */
/*   Updated: 2020/07/16 10:15:05 by ledube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int		i;
	int		factorial;
	if (nb < 0)
		return (0);
	factorial = 1;
	i = 2;
	while (i <= nb)
	{
		factorial *= i;
		i++;	
	}
	return (factorial);
}

