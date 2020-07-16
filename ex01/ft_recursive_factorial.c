/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledube <ledube@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:55:17 by ledube            #+#    #+#             */
/*   Updated: 2020/07/16 11:03:10 by ledube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int		ft_recursive_factorial(int nb)
{
	if(nb < 0)
		return (0);
	if(nb==0 || nb== 1)
		return(1);
			return nb * ft_recursive_factorial(nb - 1);
}
