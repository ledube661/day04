/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledube <ledube@student.wethinkcode.co.za>   #+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:54:26 by ledube            #+#    #+#             */
/*   Updated: 2020/07/16 14:06:12 by ledube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h> 

int		ft_sqrt(int nb)
{
	int i;
	int sq;
	if(nb == 0)
		return(0);
	while (i * i < nb) 
	{
		i++;
	}
	if ((nb % i) ==0)
		 return (i);
	else
		return(0);
}


