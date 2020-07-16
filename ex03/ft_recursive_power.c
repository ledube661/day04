/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledube <ledube@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:44:23 by ledube            #+#    #+#             */
/*   Updated: 2020/07/16 13:25:48 by ledube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power < 1)
		return (1)
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

