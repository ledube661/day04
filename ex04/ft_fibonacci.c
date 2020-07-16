/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledube <ledube@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:43:28 by ledube            #+#    #+#             */
/*   Updated: 2020/07/16 13:50:54 by ledube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int		ft_fibonacci(int nb)
{
	if(nb < 0)
		return(-1);
	if(nb <=2)
	    return(nb);
	return ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2);
}

